#include<iostream>
#include<thread>
#include<windows.h>
#include<mutex>


using namespace std;

mutex mtx;
void odd(FILE *fptr){
    mtx.lock();
    for(int i=1;i<20;i+=2){
        fprintf(fptr,"%d",i);
        fprintf(fptr,"\n");
        Sleep(1000);
        mtx.unlock();
    }
    // mtx.unlock();
}

void even(FILE *fptr) {
    mtx.lock();
    for(int i=2;i<=20;i+=2){
        fprintf(fptr,"%d",i);
        fprintf(fptr,"\n");
        Sleep(1000);
        mtx.unlock();
    }
    // mtx.unlock()
  
}



int main() {
    FILE *fptr=fopen("data1.txt","w");


    std::thread t1(odd,fptr);
    std::thread t2(even,fptr);
    t1.join();
    t2.join();
    return 0;
}