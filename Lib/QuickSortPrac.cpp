#include<iostream>
using namespace std;

void quicksort(int* arr, int start, int end){
	
	if(start >= end){
		return;
	}
	
	int pivot = arr[end];
	
	int i = start - 1;
	int j;
	for( j = start ; j < end ; j++){
		if(arr[j] <= pivot){
			i = i+1;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	int temp = arr[end];
	arr[end] = arr[i+1];
	arr[i+1] = temp;
	
	quicksort(arr, start, i);
	quicksort(arr, i+2, end);
	
}

int main(){
	int size = 10;
	int* arr = new int[size];
	
	for(int i = 0 ; i < size ; i++){
		cout<<"Element"<<i<<" ";
		cin>>arr[i];
	}
	
	quicksort(arr, 0, size-1);
	
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	delete arr;
	
}
