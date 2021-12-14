#pragma once
#include<string>
class student {
private:
	int id;
	std::string name;

public:
	student(int id, std::string name);
	std::string get_name();
	void set_name(std::string name);
	int get_id();
	void set_id(int id);
};