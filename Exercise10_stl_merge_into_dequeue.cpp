//"int main() {
//4 char one[] = {1,2,3,4,5};
//5 int two[] = {0,2,4,6,8};
//6 std::list<int> l (&two[0],&two[5]);
//7 std::deque<long> d(10);"

#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char **argv) {
	int one[]={1,2,3,4,5};
	int two[]={0,2,4,6,8};
	list<int> l(&two[0],&two[5]);
	// list<int> l(0,6);
	deque<int> d;

	deque<int>::iterator itr = d.begin();

	for(int it=0;it<sizeof(one)/sizeof(int);it++){
		d.push_back(one[it]);
	}

	for (auto item : l)
		d.push_back(item);


	cout<<"Printing in correct order"<<endl;
	for(itr=d.begin();itr!=d.end();itr++){
		cout<<*itr<<" ";
	}

	cout<<endl;

	cout<<"Printing in reverse order"<<endl;
	for(itr = d.end()-1; itr!=d.begin()-1; itr--){
		cout << *itr << " ";
	}
	cout<<endl;

}
