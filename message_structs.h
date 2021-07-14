#pragma once
#include<cstdint>
#include<string>

struct RobofleetSubscription {
	std::string topic_regex;
	uint8_t action;
};

struct RobotLocation {
	std::string frame;
	float x;
	float y;
	float z;
	float theta;
};

struct RobotStatus {
	std::string status;
	bool is_ok;
	float battery_level;
	std::string location;
};


/*
 * ROS message clones
 */
// std_msgs
struct Header {
	std::string frame_id;
	uint32_t seq;
};

// geometry_msgs
struct Point {
	float x;
	float y;
	float z;
};

struct Quaternion {
	float x;
	float y;
	float z;
	float w;
};

struct Vector3 {
	double x;
	double y;
	double z;
};

struct Pose {
	Point point;
	Quaternion quaternion;
};

struct PoseStamped {
	Header header;
	Pose pose;
};

struct PoseWithCovariance {
	Pose pose;
	double covariance[36];
};

struct PoseWithCovarianceStamped {
	Header header;
	PoseWithCovariance pose;
};

struct Twist {
	Vector3 linear;
	Vector3 angular;
};

struct TwistWithCovariance {
	Twist twist;
	double covariance[36];
};

struct TwistWithCovarianceStamped {
	Header header;
	TwistWithCovariance twist;
};

// nav_msgs
struct Odometry {
	Header header;
	std::string child_frame_id;
	PoseWithCovariance pose;
	TwistWithCovariance twist;
};
