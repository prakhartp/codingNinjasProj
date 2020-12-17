#include<iostream>
using namespace std;

// p and q are passed by value
void swap(int* p, int* q){
	int* t = p;
	p = q;
	q = t;
	cout << "Swap " << endl;
	cout <<"*p " <<  *p << " *q " << *q <<  endl;
}


int main(){

	int a = 1;
	int b = 2;

	int* p = &a;
	int* q = &b;

	cout << "a " << a <<" b " << b << endl; 	
	cout <<"*p " <<  *p << " *q " << *q <<  endl;
	
	swap(p, q);

	cout << "Main " << endl;
	cout << "a " << a <<" b " << b << endl; 	
	cout <<"*p " <<  *p << " *q " << *q <<  endl;



}

