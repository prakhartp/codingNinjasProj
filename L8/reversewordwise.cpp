#include<iostream>
using namespace std;

void reverseWordWise(char str[]){
	// This will keep index of current word start
	int wordStart = 0;
	int i = 0;
	int n = strlen(str);

	//for(; str[i] != '\0'; i++){
		for(i = 0; i <= n; i++){
			if(str[i] == ' ' || str[i] == '\0'){
			// Word Complete, so reverse it
			int start = wordStart;
			int  end = i - 1;
			while(start < end){
				int temp = str[start];
				str[start] = str[end];
				str[end] = temp;
				start++;
				end--;
			}
			// Update wordStart to next Word Start
			wordStart = i + 1;
		}
	}
/*
	// Reverse Last Word
	int start = wordStart;
	int  end = i - 1;
	while(start < end){
		int temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
*/

}



int main(){

	char str[] = "abd ghi jk";
	reverseWordWise(str);
	cout << str << endl;
}

