#include<iostream>
#include<algorithm>

using namespace std;


bool compare(int a, int b){
	return a>b;
}

int main(void){
	int data[9] = {9,3,8,2,7,1,4,5,6};
	sort(data, data+9, compare);
	for(int i=0; i<9; i++){
		cout<<data[i] <<" ";
	}
	
}
