#include<iostream>
using namespace std;
int main() {
	int num[5] = {2,3,23,232,32};
	cout<<"the numbers are : "<<endl;
	//traditional for loops
	for(int i = 0;i<=5;i++) {
		cout<<num[i]<<" "<<endl;
	}
	return 0;
}
