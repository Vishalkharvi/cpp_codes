#include <iostream>
using namespace std;

struct studentDetails{
	struct studentName{
		string firstName;
		string lastName;
	}name;
	int age;
	int id;
	struct grades{
		// struct subjects{
		// 	char os[2];
		// 	char python[2];
		// 	char java[2];
		// 	char cn[2];
		// }subject;

		// struct credits{
		// 	int os=3;
		// 	int python=4;
		// 	int java=4;
		// 	int cn=3;
		// }credits;
		int programGrade;
		int quizGrade;
		float gpa;
	}grade;
};

void insertData(studentDetails ptr[], int i){
	cout<<"Enter the first name: ";
	cin>>ptr[i].name.firstName;
	cout<<"Enter the last name: ";
	cin>>ptr[i].name.lastName;
	cout<<"Enter the age: ";
	cin>>ptr[i].age;
	cout<<"Enter the id: ";
	cin>>ptr[i].id;
	cout<<"Enter the program grade: ";
	cin>>ptr[i].grade.programGrade;

	cout<<"Enter the quiz grade: ";
	cin>>ptr[i].grade.quizGrade;
	cout<<"Enter the gpa: ";      
	cin>>ptr[i].grade.gpa;

	// cout<<"enter the grade of os"<<endl;
	// cin>>ptr[i].grade.subject.os;
	// cout<<"enter the grade of python"<<endl;
	// cin>>ptr[i].grade.subject.python;
	// cout<<"enter the grade of java"<<endl;
	// cin>>ptr[i].grade.subject.java;
	// cout<<"enter the grade of cn"<<endl;
	// cin>>ptr[i].grade.subject.cn;

	// float gp=(ptr[i].grade.subject.os)
}
void displayAll( struct studentDetails *ptr,int length){
	for(int i=0;i<length;i++){
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"First Name is :"<<ptr[i].name.firstName<<endl;
		cout<<"Last Name is :"<<ptr[i].name.lastName<<endl;
		cout<<"Age is :"<<ptr[i].age<<endl;
		cout<<"Id is :"<<ptr[i].id<<endl;
		cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
		cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
		cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
	}
}
void displayOne(struct studentDetails *ptr, int length)
{
	int id;
	cout<<"Enter the id of the Student";
	cin>>id;
	bool present=false;
	for(int i=0;i<length;i++){
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
	}
	if(present==false){
		cout<<"No student with id "<<id<<" exists"<<endl;
	}
}
int main(int argc, char **argv) {
	studentDetails stud[10];
	int option;
	int length=0;
	while(true){
		cout<<"Menu\n1. Insert Data\n2. Display All Data\n3. Display specific student data\n4. Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>option;
		switch(option){
		case 1: insertData(stud,length);
				length++;
				break;
		case 2: displayAll(stud,length);
				break;
		case 3: displayOne(stud,length);
				break;
		case 4: exit(0);
				break;
		default: cout<<"Enter the correct option"<<endl;
		}

	}

}
