#include<iostream>
using namespace std;

void increment(int i, int* p){

	i++;
	//p = &i;
	(*p)++;
	cout << "Increment " << endl;
	cout <<" i " << i <<  " &i " << &i << endl;
	cout << "p " << p << " &p " << &p << endl; 

}

int main(){

	int i = 10;
	int* p = &i;
	//increment(i, &i);
	increment(i, p);
	cout << "Main " << endl;
	cout <<" i " << i <<  " &i " << &i << endl;
	cout << "p " << p << " &p " << &p << endl; 

}

