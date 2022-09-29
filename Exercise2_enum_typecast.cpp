#include <iostream>
using namespace std;

enum color {red,green,yellow};

int main() {
    color r=static_cast<color> (1);
    cout<<r<<endl;
    return 0;
}