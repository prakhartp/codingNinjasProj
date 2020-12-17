//Implementing Counting sort( little broken code)(but does sort all except for highest value)

#include<iostream>
using namespace std;

int main(){
	int max;
	int size = 10;
	int* arr = new int[size];
	
	cout<<"Enter your max range value of the numbers to be entered -> ";
	cin>>max;
	
	for(int i = 0 ; i < size ; i++){
		cout<<"Enter element "<<i<<" -> ";
		cin>>arr[i];
		cout<<"\n";
	}
	
	//Sorting procedure:-
	
	int* buffer = new int[max+1];
	int* output = new int[size];
	
	for(int i = 0 ; i < max+1 ; i++){
		buffer[i] = 0;
	}
	
	for(int i = 0 ; i < size ; i++){
		buffer[arr[i]] = buffer[arr[i]] + 1;
	}

	
	for(int j = 1 ; j < max+1 ; j++){
		buffer[j] += buffer[j-1];
	}
	
	for(int j = 0 ; j < max+1 ; j++){
		cout<<j<<" - "<<buffer[j]<<"\n"; //LOOP FOR TESTING
	}
	
	
	for(int j = size-1 ; j >= 0 ; j--){
		output[buffer[arr[j]]] = arr[j];
		buffer[arr[j]] = buffer[arr[j]] - 1;
	}
	
	for(int i = 0 ; i < size ; i++){
		cout<<output[i]<<" ";
	}
	

	delete arr;
	delete output;
	delete buffer;
	return 0;
}
