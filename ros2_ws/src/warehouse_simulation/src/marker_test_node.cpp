#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"

class MarkerTestNode : public rclcpp::Node
{
public:
  MarkerTestNode() : Node("marker_test_node")
  {
    marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("warehouse_marker", 10);

    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&MarkerTestNode::publish_marker, this));
  }

private:
  void publish_marker()
  {
    visualization_msgs::msg::Marker marker;
    marker.header.frame_id = "base_footprint";
    marker.header.stamp = this->now();
    marker.ns = "warehouse_test";
    marker.id = 0;
    marker.type = visualization_msgs::msg::Marker::CUBE;
    marker.action = visualization_msgs::msg::Marker::ADD;

    marker.pose.position.x = 0.0;
    marker.pose.position.y = 0.0;
    marker.pose.position.z = 1.0;
    marker.pose.orientation.w = 1.0;

    marker.scale.x = 5.0;
    marker.scale.y = 5.0;
    marker.scale.z = 2.0;

    marker.color.r = 0.2;
    marker.color.g = 0.5;
    marker.color.b = 0.9;
    marker.color.a = 1.0;

    marker_pub_->publish(marker);
  }

  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MarkerTestNode>());
  rclcpp::shutdown();
  return 0;
}
