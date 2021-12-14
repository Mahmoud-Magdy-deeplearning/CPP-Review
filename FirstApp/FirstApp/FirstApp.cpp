#include <iostream>
#include<vector>
#include<course.h>
#include<grade.h>
#include<student.h>

using namespace std;

int main()
{	
	//initializations
	int studentsNumber, coursesNumber, grading;
	string name, details;
	vector<student>students;
	vector<course>courses;
	vector<grade>grades;
	
	//record students
	cout << "how many are the students?"<<endl;
	cin >> studentsNumber;
	for (int i = 0; i < studentsNumber; i++)
	{
		cout << "enter name of student: "<<endl;
		cin >> name;
		students.push_back(student(i + 1, name));
	}

	//record courses
	cout << "how many are the available courses?" << endl;
	cin >> coursesNumber;
	for (int i = 0; i < coursesNumber; i++)
	{
		cout << "enter name of the course: " << endl;
		cin >> name;
		cout << "enter name of the details: " << endl;
		cin >> details;
		courses.push_back(course(i + 1, name, details));
	}

	//assign every student grades
	for (int i = 0; i < studentsNumber; i++)
	{
		cout << "assign grade for student "<<students[i].get_name()<<endl;
		for (int j=0 ; j < coursesNumber; j=j++)
		{
			cout << "for the course: " << courses[j].get_name()<<endl;
			cin >> grading;
			grades.push_back(grade(i + 1, j + 1, grading));
		}
	}

	// showing all students grades
	int grading_id = 0;
	for (int i = 0; i < studentsNumber; i++)
	{
		cout << "grades for " << students[i].get_name() << endl;
		for (int j = 0; j < coursesNumber; j = j++)
		{
			cout << "in course course: " << courses[j].get_name() << "  ";
			cout << grades[grading_id].get_grade()<<endl;
			grading_id++;
		}
	}

	return 0;
}
