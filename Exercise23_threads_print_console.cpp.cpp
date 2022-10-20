#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;
void odd(){
    for(int i=1;i<20;i+=2){
        cout<<i<<endl;
        Sleep(1000);
    }
}

void even() {
    for(int i=2;i<=20;i+=2){
        cout<<i<<endl;
        Sleep(1000);
    }
}



int main() {
    thread t1(odd);
    thread t2(even);
    t1.join();
    t2.join();
    return 0;
}