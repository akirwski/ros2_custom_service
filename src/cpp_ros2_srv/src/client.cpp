#include "rclcpp/rclcpp.hpp"
#include "dog_srv/srv/dog.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int agrc, char **argv){
    rclcpp::init(agrc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("dog_client");
    //"dog is service name?"
    rclcpp::Client<dog_srv::srv::Dog>::SharedPtr client = node->create_client<dog_srv::srv::Dog>("dog");

    auto request = std::make_shared<dog_srv::srv::Dog::Request>();
    request->breed = 1;

    while (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while wating for the service");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, so waiting again...");
    }

    auto result = client->async_send_request(request);

    if(rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS) {


        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "got new dog. Name: %s", result.get()->name.c_str());
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service called [dog]");
    }

    rclcpp::shutdown();
    return 0;

}
