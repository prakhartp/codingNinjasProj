#include<iostream>
using namespace std;


int getCodes(string input, string output[10000]) {

	if(input.length() == 0){
		output[0] = "";
		return 1;
	}

	string smallOutput1[10000], smallOutput2[10000];

	int singleDigitNumber = input[0] - '0';
	char singleDigitChar = singleDigitNumber + 96; // 'a'+ singleDigitNumber - 1 
	int size1 = getCodes(input.substr(1), smallOutput1);
	int size2 = 0;

	int doubleDigitNumber = singleDigitNumber * 10 + input[1] - '0';
	char doubleDigitChar = 'a' + doubleDigitNumber - 1;

	if(doubleDigitNumber >= 10 && doubleDigitNumber <= 26){
		size2 = getCodes(input.substr(2), smallOutput2);
	}
	int k = 0;
	// Copy all elements from smallOutput1 and append relevant char
	for(int i = 0; i < size1; i++){
		output[k++] = singleDigitChar + smallOutput1[i];
	}
	// Copy all elements from smallOutput2 (if needed) and append relevant char
	for(int i = 0; i < size2; i++){
		output[k++] = doubleDigitChar + smallOutput2[i];
	}
	return k; // size1 + size2
}

int main(){



}

