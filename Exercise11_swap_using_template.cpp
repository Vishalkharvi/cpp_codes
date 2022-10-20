/*Create the C++ Function Template named swap so that it has two
parameters of the same type.  A Template Function created from swap
will exchange the values of these two parameters.*/

#include<iostream>
using namespace std;

template <typename X,typename Y>void swapping(X a, Y b){
    cout<<"Before swapping a : "<<a<<" b : "<<b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swapping a : "<<a<<" b : "<<b;
}

int main(){
    int a,b;
    cout<<"\n Swapping "<<endl;
    cout<<"Enter the numbers \t";
    cin>>a>>b;
    swapping(a,b);
    return 0;
}