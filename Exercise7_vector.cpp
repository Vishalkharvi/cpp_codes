

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<int> vect={1,2,3,4};
	cout<<"Elements of vector are:"<<endl;
	for(int i = 0; i < vect.size(); i++)
	{
	    cout<<vect[i]<<" ";
	}
	cout<<endl;

//	Copy vector elements to list
	list<int> l(vect.begin(), vect.end());

//	To reverse the list
	l.reverse();

	cout<<"Elements of list are:"<<endl;
	for(int item : l){
		cout<<item<<" ";
	}
	cout<<endl;

//	copy list elements to the vector
	vector<int> vect2(l.begin(),l.end());
	cout<<"Elements of vector are: "<<endl;
	for(int item: vect2){
		cout<<item<<" ";
	}
	cout<<endl;



	return 0;
}
