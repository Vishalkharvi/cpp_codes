#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;
void odd(FILE *fptr){
    for(int i=1;i<20;i+=2){
        fprintf(fptr,"%d",i);
        fprintf(fptr,"\n");
        Sleep(1000);
    }
}

void even(FILE *fptr) {
    for(int i=2;i<=20;i+=2){
        fprintf(fptr,"%d",i);
        fprintf(fptr,"\n");
        Sleep(1000);
    }
}



int main() {
    FILE *fptr=fopen("data.txt","w");


    std::thread t1(odd,fptr);
    std::thread t2(even,fptr);
    t1.join();
    t2.join();
    return 0;
}