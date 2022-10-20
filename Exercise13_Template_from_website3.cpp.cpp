#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 init (T1 num1, T1 num2, T2& start){
	return num1+num2;
}

int main(int argc, char const *argv[])
{
    int num1=5, num2=10,start=0;
    cout<<init(num1,num2,start)<<endl;
    return 0;
}
