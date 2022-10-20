#include <iostream>
#include <algorithm>
#include "student_hdr.h"
using namespace std;

student *head;
// student *sorted;

string CSE[]={"DSA","OS","CNS"};
string ECE[]={"ADE","IOT","CO"};

student* copy(string *arr, student *ptr){
	for(int i=0;i<3;i++){
		ptr->sub[i]=arr[i];
	}
	return ptr;
}

void add(){
	student *ptr;
	ptr=new student();
	if(ptr==NULL){
		cout<<"Overflow"<<endl;
		exit(0);
	}
	cout<<"Enter college Name:";
	cin>>ptr->collegeName;
	cout<<"Enter Department id:";
	cin>>ptr->deptId;
	cout<<"Enter Department Name:";
	cin>>ptr->deptName;
	switch(ptr->deptId){
	case 1: ptr=copy(CSE, ptr);
			break;
	case 2: ptr=copy(ECE, ptr);
			break;
	}
	cout<<"Enter the student id:";
	cin>>ptr->id;
	cout<<"Enter the student name:";
	cin>>ptr->name;
	ptr->next=NULL;
	if(head==NULL){
		head=ptr;
	}else{
		student *point;
		point=head;
		while(point->next!=NULL){
			point=point->next;
		}
		point->next=ptr;
	}
}



void printSub(student *ptr){
	cout<<"Subjects are: ";
	for(int i=0;i<3;i++){
		cout<<ptr->sub[i]<<" ";
	}
	cout<<endl;
}

void traverse(){
	student *ptr;
	if(head==NULL){
		cout<<"No elements exist"<<endl;
	}else{
		ptr=head;
		cout<<"-------Details--------"<<endl;
		while(ptr!=NULL){
			cout<<"College Name is: "<<ptr->collegeName<<endl;
			cout<<"Department Id: "<<ptr->deptId<<" Department Name: "<<ptr->deptName<<endl;
			printSub(ptr);
			cout<<"Student Id is: "<<ptr->id<<", Student name is: "<< ptr->name<<endl;
			cout<<"-------------------------------------------------"<<endl;
			ptr=ptr->next;
		}
	}
	cout<<endl<<endl<<endl;

}

int main() {
	int num;
	while(true){
		cout<<"Menu\n1.Add the element\n2.Traverse\n3.Exit\n"<<endl<<endl<<endl;
		cout<<"Enter choice:";
		cin>>num;
		switch(num){
		case 1:
			add();
			break;
		case 2:
			// insertion_sort();
			traverse();
			break;
		case 3:
			exit(0);
			break;

		default:
			cout<<"Wrong choice"<<endl<<endl;
		}
	}


}






// void sortedInsert(student* newnode){
// 	if (sorted == NULL ||
// 		sorted->id >= newnode->id)
// 	{
// 		newnode->next = sorted;
// 		sorted = newnode;
// 	}
// 	else
// 	{
// 		student* current = sorted;

// 		/* Locate the node before the
// 		   point of insertion */
// 		while (current->next != NULL &&
// 			   current->next->id < newnode->id)
// 		{
// 			current = current->next;
// 		}
// 		newnode->next = current->next;
// 		current->next = newnode;
// 	}

// }

// void insertion_sort(){
// 	// sorted = NULL;
// 	student* current = head;

// 	while (current != NULL)
// 	{

// 		student* next = current->next;
// 		sortedInsert(current);
// 		current = next;
// 	}
// 	head = sorted;
// }