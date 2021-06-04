
#include "rclcpp/rclcpp.hpp"
#include "dog_srv/srv/dog.hpp"

#include <memory>

void sendResponse(const std::shared_ptr<dog_srv::srv::Dog::Request> request, std::shared_ptr<dog_srv::srv::Dog::Response> response){
    response->name = "pochi";
    response->age = 0;
    response->sex = true;
    response->breed = request->breed;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request");
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response");
}

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("dog_server");
    rclcpp::Service<dog_srv::srv::Dog>::SharedPtr service = node->create_service<dog_srv::srv::Dog>("dog", &sendResponse);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to accept new dog");
    rclcpp::spin(node);
    rclcpp::shutdown();
}
