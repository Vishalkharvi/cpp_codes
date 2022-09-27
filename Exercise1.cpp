#include <iostream>
#include<string.h>
using namespace std;
#include "studentDetails.h"

void insertData(studentDetails ptr[]);
void displayAll( struct studentDetails *ptr);
void displayOne(struct studentDetails *ptr);
// static int length=0;

int main() {
	studentDetails stud[10];
	int option;
	
	while(true){
		cout<<"Menu\n1. Insert Data\n2. Display All Data\n3. Display specific student data\n4. Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>option;
		switch(option){
		case 1: insertData(stud);
				break;
		case 2: displayAll(stud);
				break;
		case 3: displayOne(stud);
				break;
		case 4: exit(0);
				break;
		default: cout<<"Enter the correct option"<<endl;
		}

	}

}

void insertData(studentDetails ptr[]){
    static int length=0;
	cout<<"Enter the first name: ";
	cin>>ptr[length].name.firstName;
	cout<<"Enter the last name: ";
	cin>>ptr[length].name.lastName;
	cout<<"Enter the age: ";
	cin>>ptr[length].age;
	cout<<"Enter the id: ";
	cin>>ptr[length].id;
	cout<<"Enter the program grade: ";
	cin>>ptr[length].grade.programGrade;

	cout<<"Enter the quiz grade: ";
	cin>>ptr[length].grade.quizGrade;
	cout<<"Enter the gpa: ";      
	cin>>ptr[length].grade.gpa;
    length=length+1;

}
void displayAll( struct studentDetails *ptr){
        int i=0;
        while(!(ptr[i].name.firstName).empty()){
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"First Name is :"<<ptr[i].name.firstName<<endl;
		cout<<"Last Name is :"<<ptr[i].name.lastName<<endl;
		cout<<"Age is :"<<ptr[i].age<<endl;
		cout<<"Id is :"<<ptr[i].id<<endl;
		cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
		cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
		cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
        i++;
	}
}
void displayOne(struct studentDetails *ptr)
{
	int id;
	cout<<"Enter the id of the Student";
	cin>>id;
	bool present=false;
    int i=0;
    while(!(ptr[i].name.firstName).empty()){
		if(ptr[i].id==id){
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"First Name is :"<<ptr[i].name.firstName<<endl;
			cout<<"Last Name is :"<<ptr[i].name.lastName<<endl;
			cout<<"Age is :"<<ptr[i].age<<endl;
			cout<<"Id is :"<<ptr[i].id<<endl;
			cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
			cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
			cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
			cout<<"-----------------------------------------------------------------"<<endl;
			present=true;
			break;
		}
        i++;
	}
	if(present==false){
		cout<<"No student with id "<<id<<" exists"<<endl;
	}
}