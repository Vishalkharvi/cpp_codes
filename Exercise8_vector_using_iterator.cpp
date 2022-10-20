//Create a vector for integers. Look for a value in that vector
//- Use iterator to loop

#include <iostream>
#include <vector>
using namespace std;

void search(vector<int> vect, int search){
	bool flag=false;
	vector<int>::iterator iter;
	// for(iter=vect.end()-1;iter>=vect.begin();iter--){
	// 	if(*iter==search){
	// 		flag=true;
	// 		cout<<"Element "<<search<<" found!";
	// 	}
	// }
	for(iter=vect.begin();iter!=vect.end();iter++){
		if (*iter==search){
			flag=true;
			cout<<"Element "<<search<<"is found";
		}
	}
	if(!flag){
		cout<<"Element not found!";
	}
	cout<<endl;
}
int main(){
	int find;
	vector<int> vect={1,2,3,4,5};
	cout<<"Enter the value to search an element:";
	cin>>find;
	search(vect, find);

	return 0;
}
