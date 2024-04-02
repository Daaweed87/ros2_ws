//
//Description
//Creats a ROS2 node that performs a simple mathematical operation.
//The node subscribes to a ROS2 topic (/input_numbers),
//receives two floating-point numbers, divides them,
//and then publishes the result on a new  topic (/division_result). 
//
// Necessary imports.
#include "rclcpp/rclcpp.hpp"
#include "my_package/msg/two_floats.hpp"
#include "std_msgs/msg/float64.hpp"

// Constructor for the SimpleDiv class. Creates the publisher topic.
class SimpleDiv : public rclcpp::Node
{
public:
    SimpleDiv() : Node("simple_div")
    {	
    	subscription_ = this->create_subscription<my_package::msg::TwoFloats>(
            "input_numbers", 10, std::bind(&SimpleDiv::div_callback, this, std::placeholders::_1));

        publisher_ = this->create_publisher<std_msgs::msg::Float64>("division_result", 10);
    }

// Callback method to handle incoming messages on the 'input_numbers' topic.
private:
    void div_callback(const my_package::msg::TwoFloats::SharedPtr msg) const
    {
        std_msgs::msg::Float64 result_msg;
        if (msg->second_number != 0)
        {
            result_msg.data = msg->first_number / msg->second_number;
            RCLCPP_INFO(this->get_logger(), "Received numbers: %f, %f. Result: %f", msg->first_number, msg->second_number, result_msg.data);
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "Division by zero.");
            result_msg.data = std::numeric_limits<double>::quiet_NaN();
        }
        publisher_->publish(result_msg);
    }

    rclcpp::Subscription<my_package::msg::TwoFloats>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
};


// Initialize the ROS 2 node. Spin the node to handle callbacks.
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimpleDiv>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

