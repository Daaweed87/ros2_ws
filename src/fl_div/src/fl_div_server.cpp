#include "rclcpp/rclcpp.hpp"
#include "my_package/srv/add_two_ints2.hpp"
#include "my_package/msg/add_two_ints2.hpp"

#include <memory>

void add(
    const std::shared_ptr<my_package::srv::AddTwoInts2::Request> request,
    std::shared_ptr<my_package::srv::AddTwoInts2::Response> response,
    const rclcpp::Publisher<my_package::msg::AddTwoInts2>::SharedPtr publisher
) 
{
    // Számítások elvégzése
    response->sum = request->a / request->b;

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %f " "b: %f",
        request->a, request->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Result: [%f]", (double)response->sum);

    auto message = std::make_shared<my_package::msg::AddTwoInts2>();
    message->b = response->sum;

    publisher->publish(*message);
}

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<rclcpp::Node>("input_numbers_server");

    auto publisher = node->create_publisher<my_package::msg::AddTwoInts2>("division_result", rclcpp::QoS(10));

    auto service = node->create_service<my_package::srv::AddTwoInts2>(
        "input_numbers", 
        std::bind(&add, std::placeholders::_1, std::placeholders::_2, publisher)
    );

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to divide two numbers.");

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}

