#include<string>
#include<grade.h>


grade::grade(int student_id, int course_id, int grading) {
	this->student_id = student_id;
	this->course_id = course_id;
	this->grading = grading;
}
int grade::get_studentId() {
	return student_id;
}
void grade::set_studentId(int id) {
	this->student_id = id;
}
int grade::get_courseId() {
	return course_id;
}
void grade::set_courseId(int id) {
	this->course_id = id;
}
int grade::get_grade() {
	return grading;
}
void grade::set_grade(int grading) {
	this->grading=grading;
}
