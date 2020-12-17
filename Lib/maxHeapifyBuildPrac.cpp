#include<iostream>
#include<math.h>
using namespace std;

void maxHeapify(int* arr, int i, int size){
	
	int left = (2*i) + 1;
	int right = (2*i) + 2;
	int largest = i;
	
	if(left < size && arr[left] > arr[largest]){
		largest = left;
	}	
	if(right < size && arr[right] > arr[largest]){
		largest = right;
	}
	
	if(largest != i){
		int temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;
		
		maxHeapify(arr, largest, size);
	}
	
	return;
	
}

void makeHeap(int* arr, int size){
	
	int n = floor(size/2);
	
	for( int i = n ; i >= 0 ; --i){
		maxHeapify(arr, i, size);
	}
	
	return;
	
}

void heapsort(int* arr, int size){

	makeHeap(arr, size);
	
	for(int i = size-1 ; i > 0 ; --i){
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		maxHeapify(arr, 0, i-1);
	}
	

}


int main(){
	
	int size = 10;
	int* arr = new int[size];
	
	for(int i = 0 ; i < size ; ++i){
		cout<<"Enter the value "<<i<<" ";
		cin>>arr[i];
		cout<<"\n";
	}

//	makeHeap(arr, size);
	heapsort(arr, size);
	

	
	for(int i = 0 ; i < size ; ++i){
		cout<<arr[i]<<" ";
	}
	
	
	delete arr;
	return 0;
}
