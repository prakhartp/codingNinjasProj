#include<iostream>
using namespace std;


void increment(int i, int* p, int** r){
	i++;
	p = &i;
	(*p)++;
	r = &p;
	(**r)++;
	cout << "Increment " << endl;
	cout <<"i "  << i << " &i " << &i << endl; 
	cout << "*p " << *p << endl;
	cout << "**r " << **r << endl;
	
}

int main(){

	int i = 10;
	int* p = &i;
	int** r = &p;
	
	increment(i, p, r);
	cout <<"i "  << i << " &i " << &i << endl; 
	cout << "*p " << *p << endl;
	cout << "**r " << **r << endl;
	


	/*
	int i = 10;
	int j = 20;
	int *p = &i;
	int *q = &j;

	int** r = &p;
	
	//p = q;	
	 *r = &j;
	*q = 50;
	**r = 100;

	cout <<"i "  << i << " &i " << &i << endl; 
	cout <<"j "  << j << " &j " << &j << endl; 	
	
	cout << "*p " << *p << endl;
	cout << "*q " << *q << endl;
	cout << "**r " << **r << endl;
	*/
	/*cout <<"i "  << i << " &i " << &i << endl; 
	cout <<"p "  << p << " &p " << &p << endl; 
	cout <<"q "  << q << " &q " << &q << endl; 
	cout << "*p " << *p << endl;
	cout << "*q " << *q << endl;
	cout << "**q " << **q << endl;
	*/
}

