#pragma once
#include<string>
class course {
private:
	int id;
	std::string name;
	std::string details;

public:
	course(int id, std::string name, std::string details);
	std::string get_name();
	void set_name(std::string name);
	int get_id();
	void set_id(int id);
	std::string get_details();
	void set_details(std::string details);
};