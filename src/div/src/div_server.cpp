#include "rclcpp/rclcpp.hpp"
#include "my_package/srv/add_two_ints2.hpp" // Importáljuk a saját szolgáltatás fájlt
#include <memory>

void add(
    const std::shared_ptr<my_package::srv::AddTwoInts2::Request> request,
    std::shared_ptr<my_package::srv::AddTwoInts2::Response> response)
{

    // Az input érvényes, végezzük el a számítást
    response->sum = request->a / request->b;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %f " "b: %f",
        request->a, request->b);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%f]", (double)response->sum);

}

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("add_two_ints_server");
    auto service = node->create_service<my_package::srv::AddTwoInts2>(
        "add_two_ints", &add);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
