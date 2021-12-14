#include<string>
#include<course.h>

course::course(int id, std::string name, std::string details) {
	this->name = name;
	this->id = id;
	this->details = details;
}
std::string course::get_name() {
	return name;
}
void course::set_name(std::string name) {
	this->name = name;
}
int course::get_id() {
	return id;
}
void course::set_id(int id) {
	this->id = id;
}
std::string course::get_details() {
	return details;
}
void course::set_details(std::string details) {
	this->details = details;
}