#include<iostream>
using namespace std;

int main(){

	int i = 10;
	int* p = &i;

	p = p + 1;
	//p++

	int j = 20;
	int* q = &j;

	if(p == q){
		cout << "If " << endl;
	}else{
		cout << "Else " << endl;
	}


	/*
	cout << p << endl;
	cout << p + 1 << endl;
	cout << p - 1 << endl;
*/
}

