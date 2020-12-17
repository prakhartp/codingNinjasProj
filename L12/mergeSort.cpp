#include<iostream>
using namespace std;


void merge(int part1[], int size1, int part2, int size2, int output[]){
	
	int i = 0, j = 0, k = 0;
	while(i < size1 && j < size2){
		if(part1[i] < part2[j]){
			output[k++] = part1[i++];
		}else{
			output[k++] = part2[j++];
		}
	}
	while(i < size1){
			output[k++] = part1[i++];
	}
	while(j < size2){
			output[k++] = part2[j++];
	}
}

void mergeSort(int input[], int size){	
	if(size <= 1){
		return;
	}
	// Split Array in 2 parts -> part1 and part2
	int size1 = size/2;
	int size2 = size - size1;

	int part1[size1], part2[size2];
	int i = 0;
	for(; i < size1; i++){
		part1[i] = input[i];
	}
	for(; i < size; i++ ){
		part2[i - size1] = input[i];
	}
	// Sort part1
	mergeSort(part1, size1);
	// sort part2
	mergeSort(part2, size2);
	// Merge part1 and part2
	merge(part1, size1, part2, size2, input);
}

// This will sort the input array from start to end
void merge(int input[], int start, int end){

	int mid = (start + end)/2;

	int i = start;
	int j = mid + 1;

	int temp[end - start + 1]

	while(i <= mid && j <= end){
			// Store in temp;
	}


	// // Copy elements from temp to input

}

void mergeSort(int input[], int start, int end){

	if(start >= end){
		return;
	}
	int mid = (start + end)/ 2;
	mergeSort(input, start, mid);
	mergeSort(input, mid+1, end);
	merge(input, start, end);
}

void mergeSort(int input[], int size){
	mergeSort(input, 0, size - 1);
}



int subsequences(string input, string output[]){

}


int main(){




}

