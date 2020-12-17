#include<iostream>
using namespace std;

int b = 10;

void demo(){
	int i = 10;
	int* p = new int;
	delete p;
	p = &i;
}

int* func(){

	 //int arr[10];
	int* arr = new int[5];	
	//delete [] arr;
	return arr;
}


int main(){

	int* arr = func();
	
	//delete [] arr; 	
	//arr[1] = 100;
	/*demo();

	int b = 10;
	int d = 100;
	*/	
}

