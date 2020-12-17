#include<iostream>
using namespace std;




int main(){

	//int arr[][3] = {10, 11, 12, 20, 2, 23, 4};
	//int arr[][3] = {{10,11},{4,5}};
	//int arr[4][3] = {{10,11}};
	int arr[2][3] = {{1,2}, {2,3}};
	//cout << arr[1][2] << endl;
	
	int m = 2;
	int n = 3;

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}

