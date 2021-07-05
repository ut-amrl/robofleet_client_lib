#pragma once
#include<cstdint>
#include<string>
#include<vector>

struct RobofleetSubscription {
	std::string topic_regex;
	uint8_t action;
};

struct RobotLocation {
	std::string frame;
	float x;
	float y;
	float theta;
};

struct RobotStatus {
	std::string status;
	bool is_ok;
	float battery_level;
	std::string location;
};

// ros std_msgs/Time
struct Time {
	uint32_t _sec;
	uint32_t _nsec;
};

// ros std_msgs/Header
struct Header {
	uint32_t seq;
	Time stamp;
	std::string frame_id;
};

// ros sensor_msgs/CompressedImage
struct CompressedImage {
	Header header;
	std::string format;
	std::vector<uint8_t> data;
	//uint8_t data[];
};
