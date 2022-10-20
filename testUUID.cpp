#include<iostream>
using namespace std;
int main() {
    string s = "uuidgen";
    const char* command = s.c_str();
    system(command);

}