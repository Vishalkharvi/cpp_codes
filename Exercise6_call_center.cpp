#include <iostream>
#include <vector>
#include<string>
#include "Exercise6_call_center.h"
using namespace std;


vector<Employee> respondents;
vector<Employee> managers;
vector<Employee> directors;

void createStaff(){
    for (int i = 0; i < 30; i++) {
        Employee e(i,false);
        if (i < 10)
            respondents.push_back(e);
        else if (10 <= i && i < 20)
            managers.push_back(e);
        else
            directors.push_back(e);

    }
}

string handleCall(){
    for(Employee& e: respondents){
        if(e.status==true){
            e.status=false;
            string s="Respondent with emp id " + to_string(e.number) +" available to pick the call";
            return s;
        }
    }
    cout<<"Call escalated to Manager"<<endl;
    for(Employee& e: managers){
        if(e.status==true){
            string s="Manager with emp id " + to_string(e.number) +" available to pick the call";
            e.status=false;
            return s;
        }
    }
    cout<<"Managers not available, call escalated to the director"<<endl;
    for(Employee& e: directors){
        if(e.status==true){
            string s="Director with emp id " + to_string(e.number) +" available to pick the call";
            e.status=false;
            return s;
        }
    }
    return "All the employees are occupied, please call again later";
}

int main()
{
    createStaff();
    respondents[1].status=true;
    managers[2].status=true;
    directors[4].status=true;
    cout<<"------------------------------"<<endl;
    cout<<handleCall()<<endl;
    cout<<handleCall()<<endl;
    cout<<handleCall()<<endl;
    cout<<handleCall()<<endl;
    cout<<handleCall()<<endl;
    cout<<"-------------------------------"<<endl;
   
    return 0;
}
