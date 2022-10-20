//Write a class template function “search” that searches the first element of a
//storage container that contains the value  “element”. Use this function
//to search in data in vector, lists, queue and deque storage class for a element.

#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <deque>
using namespace std;

template <typename T, typename U>
void search(T container, U element){
	bool flag=false;


	T<int>::iterator it;
	for(it=container.begin();it!=container.end();it++){
		if (*it==element){
			cout<<"element found"<<endl;
		}
	}

	for(int itr:container){
		if(element==itr){
			flag=true;
			cout<<"Element found"<<endl;
		}
	}
	if(!flag){
		cout<<"Element not found"<<endl;
	}
}


int main(int argc, char **argv) {

	vector<int> v={1,2,3,4,5};
	list<int> l={2,3,5,7,9,4};
	deque<int> dq={45,66,3,34,87};
	queue<int> qu(dq);
	search(v, 1);
	search(l, 32);
	search(dq, 66);
	// search(qu,45);
}
