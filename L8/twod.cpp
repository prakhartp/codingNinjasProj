#include<iostream>
using namespace std;

void printRowWise(int arr[][10], int m, int n){
	
	cout << arr[1][2] << endl;

}

void findLargest(int arr[][1000], int row, int col){

	int largestRowSum = 0;
	// Assuming first row is largest
	int largestRowIndex = 0;
	int currentRowSum = 0;	
	for(int i = 0; i < rows; i++){
		currentRowSum = 0;
		// For every col in ith row
		for(int j = 0; j < cols; j++){
			//cout << arr[i][j] << " ";
			currentRowSum += arr[i][j];
		}
		if(currentRowSum > largestRowSum){
			largestRowSum  = currentRowSum;
			largestRowIndex = i;
		}
	}
	// Similarly find largest Column

	// Next find overall largest amongst row and column
}


int main(){
	int rows, cols;
	cin >> rows >> cols;
	int arr[10][10];
	
	// For every row
	for(int i = 0; i < rows; i++){
		// For every col in ith row
		for(int j = 0; j < cols; j++){
			//cout << "Enter elem at " << i << " row " << j << " col " << endl;
			cin >> arr[i][j];
		}
	}
	printRowWise(arr, rows, cols);
	/*
		 Column Wise Print
	for(int j = 0; j < cols; j++){
		for(int i = 0; i < rows; i++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
*/
/*	int sumRow = 0;	
	for(int i = 0; i < rows; i++){
		sumRow = 0;
		// For every col in ith row
		for(int j = 0; j < cols; j++){
			//cout << arr[i][j] << " ";
			sumRow += arr[i][j];
		}
		cout <<  sumRow << endl;
	}
*/
}

