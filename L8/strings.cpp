#include<iostream>
using namespace std;

void printSubstrings(char str[]){
	
	for(int start = 0; start <= n - 1;; start++){
		for(int end = start; end <= n - 1; end++){
			// Print all chars from start to end
		}
	}

}

void reverse(char str[]){

	int i = 0;
	int j = strlen(str) - 1;
	while(i < j){
		// swap chars at ith and jth index
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

}



int main(){

	//char ch = 0; // null char
	//char ch = '0'; // 48
	//strlen
	// strcpy
	//strcmp 
	//strcat


	char arr1[10];
	//cin >> arr1;

	char arr2[] = "ab"; // 3 size array -> with null
	int i = 10;
	char chArr[] = {'a','b', 'c', '\0', 'd', 'e'}; 
	//  size array without null

	cout << arr2 << endl;	
	cout << chArr << endl;
	//cin.getline(chArr, 10);


}

