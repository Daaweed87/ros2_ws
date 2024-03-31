#include "rclcpp/rclcpp.hpp"
#include "my_package/srv/add_two_ints2.hpp"
#include <chrono>
#include <cstdlib>
#include <memory>
#include <cctype>
#include <string>
#include <iostream>

using namespace std::chrono_literals;

bool isStringAValidNumber(const std::string& str) {
    size_t dotCount = 0;
    size_t commaCount = 0;

    // Ellenőrizze az első karaktert
    if (!isdigit(str[0]) && str[0] != '-') {
        return false;
    }

    for (size_t i = 1; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            // Ellenőrizze az utolsó karaktert
            if (i == str.length() - 1) {
                return false;
            }
            if ((str[i] == '.' || str[i] == ',') && dotCount == 0 && commaCount == 0) {
                if (str[i] == '.') dotCount++;
                else commaCount++;
                continue;
            }
            return 0;
        }
    }
    return 1;
}

double stod_with_comma(const std::string& str) {
    std::string str_copy = str;
    std::replace(str_copy.begin(), str_copy.end(), ',', '.');
    return std::stod(str_copy);
}

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);

    if (argc != 3) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: add_two_ints_client X Y");
        return 1;
    }

    if (!isStringAValidNumber(argv[1]) || !isStringAValidNumber(argv[2]) ) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: add_two_ints");
        return 1;
    }
    
    if (stod_with_comma(argv[2]) == 0) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The second argument cannot be zero.");
        return 1;
    }

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_client");

    rclcpp::Client<my_package::srv::AddTwoInts2>::SharedPtr client =
        node->create_client<my_package::srv::AddTwoInts2>("add_two_ints");

    auto request = std::make_shared<my_package::srv::AddTwoInts2::Request>();

    request->a = stod_with_comma(argv[1]);
    request->b = stod_with_comma(argv[2]);

    while (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }

    auto result = client->async_send_request(request);

    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %f", result.get()->sum);
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
    }

    rclcpp::shutdown();

    return 0;
}

