#include "rclcpp/rclcpp.hpp"

class SimulationStatusNode : public rclcpp::Node
{
public:
  SimulationStatusNode()
  : Node("simulation_status_node")
  {
    RCLCPP_INFO(this->get_logger(), "Warehouse simulation package is running.");
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimulationStatusNode>());
  rclcpp::shutdown();
  return 0;
}
