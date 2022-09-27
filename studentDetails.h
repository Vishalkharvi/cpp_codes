#include<iostream>
#include<string>
using namespace std;
struct studentDetails{
	struct studentName{
		string firstName;
		string lastName;
	}name;
	int age;
	int id;
	struct grades{
		int programGrade;
		int quizGrade;
		float gpa;
	}grade;
};