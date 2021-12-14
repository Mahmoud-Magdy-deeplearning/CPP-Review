#include<string>
#include<student.h>

	student::student(int id, std::string name) {
	this->name = name;
	this->id = id;
	}

	std::string student::get_name() {
		return name;
	}
	void student::set_name(std::string name) {
		this->name = name;
	}
	int student::get_id() {
		return id;
	}
	void student::set_id(int id) {
		this->id = id;
	}
