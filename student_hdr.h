#include<iostream>
using namespace std;

class college{
public:
	string collegeName;
};

class Department: public college{
public:
	string deptName;
	int deptId;
	string sub[3];
};

class student: public Department{
public:
	int id;
	string name;
	student *next;
};


