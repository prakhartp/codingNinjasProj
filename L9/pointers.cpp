#include<iostream>
using namespace std;

int main(){

	int i;
	int *p = 0; // We are making p point to 0 memory address -> NULL Pointers

	int* r = NULL;

	cout << p << endl;
	cout << *p << endl;

	/*
	int a = 10;
	int *p = &a;
	int b = 20;
	int *r = &b;

	(*p)++;
	
	r = p;

	(*r)++;

	cout <<"a " << a << endl; 
	cout <<"b " << b << endl; 
	cout <<"*p " <<  *p << endl;
	cout <<"*r " <<  *r << endl;
	*/

	/*
	b = *p;
	*p = 20;
	p = &b;	
	*p = 100;
	
	cout <<"a " << a << endl; 
	cout <<"b " << b << endl; 
	cout <<"*p " <<  *p << endl;
	*/

	/*
	int i = 10;	
	int* p  =  &i;

	double d = 10.5;
	double* ptr = &d;

	char c = 'a';
	char* ptr1 = &c;
*/

	/*
	int a = *p;
	cout << "&a " << &a << endl;
	cout << "&i " << &i << endl;
	cout << "&p " << &p << endl;
*/

	//a++;
	
/*	cout << a << endl;
	cout << i << endl;
	cout << *p << endl;
*/

	/*	cout << &i << endl;
	cout << p << endl;
	cout << *p << endl;
*/
}

