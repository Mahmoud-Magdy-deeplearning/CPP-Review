#pragma once
#include<string>
class grade {
private:
	int student_id;
	int course_id;
	int grading;
public:
	grade(int student_id, int course_id, int grading);

	int get_studentId();
	void set_studentId(int id);

	int get_courseId();
	void set_courseId(int id);

	int get_grade();
	void set_grade(int grading);

};