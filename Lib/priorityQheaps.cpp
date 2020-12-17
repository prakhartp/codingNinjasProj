// Watch size limit, this is just testing the priority queue algorithm. Doesnt implement dyanmic arrays.

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

int top(int* arr, int size){
	if(size != 0){
		return arr[0];
	}
	
	else return -1;
}

int popMax(int* arr, int size){
	int max = arr[0];
	
	arr[0] = arr[size-1];
	size = size-1;
	
	maxHeapify(arr, 0, size);
	return max;
}

void increasePriority(int* arr, int index, int val, int size){
	
	if(val < arr[index]){
		cout<<"Invalid operation";
		return;
	}
	
	arr[index] = val;
	
	int i = index;
	int parent = floor(index/2);
	while(i > 0 && arr[i] > arr[parent]){
		int temp = arr[i];
		arr[i] = arr[parent];
		arr[parent] = temp;
		
		i = parent;
		parent = floor(i/2);
	}
	
	return;
	
}

void push(int* arr, int val, int size){
	
	size = size + 1;
	arr[size-1] = val;
	
	increasePriority(arr, size-1, val, size);
	
	return;
	
}

int main(){
	int size = 10;
	
	int* arr = new int[size];
	
	push(arr, 4, 0);
	push(arr, 1, 1);
	push(arr, 3, 2);
	push(arr, 2, 3);
	push(arr, 5, 4);
	popMax(arr, 5);
	popMax(arr,4);
	
	for(int i = 0 ; i < 3 ; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}




