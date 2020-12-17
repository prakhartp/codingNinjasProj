#include<iostream>
using namespace std;

void demo(int arr[]){

	//cout << "Demo " << sizeof(arr) << endl;
	cout << arr[0] << endl;
	cout << arr[-1] << endl;
}



int main(){

	int i = 10;

	int arr[] = {4,6,1,8};
	cout << "Main " << arr[0] << endl;
	//cout << "Main " << sizeof(arr) << endl;
	demo(arr);
	
	/*int arr2[] = {7,8,9};

	int* p = arr;
	
	cout << sizeof(p) << endl;
	cout << sizeof(arr) << endl;
*/
//	p++; // p = p + 1
//	arr++; // arr = arr + 1

//	p = arr2;
//	arr = arr2;

//	cout << *p << endl;


/*	
	cout << arr[2] << " " << *(arr + 2) << " " << *(p + 2) << " " << p[2] <<  endl;
	cout << 2[arr] << " " << 2[p] << endl;
*/
	
	/*
	cout << p << endl;
	cout << arr << endl;
	cout << *arr <<  " " << *p << endl;
	*/


}

