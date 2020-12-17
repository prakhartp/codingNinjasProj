#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0){
		return 1;
	}
	//int b = 10;
	return n * fact(n - 1);
}

// Recursion Moving from 1st Number to Last 
int sum(int input[], int n) {
	
	if(n == 0){
		return 0;
	}
	// Recursion
	int smallAns = sum(input + 1, n - 1);
	int ans = input[0] + smallAns;
	return ans;
}

// Recursion Moving from Last Number to First 
int sum2(int input[], int n){
	if(n == 0){
		return 0;
	}
	// Recursion on elements except last
	int smallAns = sum(input, n - 1);
	int ans = smallAns + input[n - 1];
	return ans;
}

int sumOfDigits(int n){
	if(n == 0){
		return 0;
	}

	int lastDigit = n % 10;
	int smallAns = sumOfDigits(n / 10);
	return smallAns + lastDigit;
}

int allIndices(int input[], int size, int x, int output){
	if(size == 0){
		return 0;
	}
	int smallCount = allIndices(input, size - 1, x, output);
	if(input[size - 1] == x){
		output[smallCount] = size - 1;
		return smallCount + 1;
	}else{
		return smallCount;
	}
}

void removeX2(char input[]){

	if(input[0] == '\0'){
		return;
	}
	if(input[0] == 'x'){
		// Shift all chars to left
		int i = 1;
		int length = strlen(input);
		for(int i = 1; i <= length; i++){
			input[i - 1] = input[i];
		}
	//Recursion call from input -> because we have shifted all chars to left already
		removeX2(input);
	}else{
		removeX2(input + 1);
	}
}



void removeX(char input[]){
	if(input[0] == '\0'){
		return;
	}
	// Assume that recursion will remove all x from input + 1 till end
	removeX(input + 1);
	
	// Now we have to work for first char
	if(input[0] == 'x'){
		// Shift all chars towards left
		int i = 1;
		int length = strlen(input);
		for(int i = 1; i <= length; i++){
			input[i - 1] = input[i];
		}
		/*
		// Alternate for the "for" loop above	 
		for(; input[i] != '\0' ; i++){
			input[i - 1] = input[i]; 
		}
		// to shift null
		input[i - 1] = input[i];
		*/
	}else{
		// Nothing -> Recursion did all the work
	}
}


bool checkPalindromeHelper(char input[], int startIndex, int endIndex){
    
    if(startIndex >= endIndex){
        return true;
    }
    
    if(input[startIndex] == input[endIndex]){
        
        // Check if string from startIndex + 1to endIndex - 1 is palindrome 
        bool smallAns = checkPalindromeHelper(input, startIndex + 1, 
                                             endIndex - 1);
         return smallAns;
         /*  if(smallAns == true){
            return true;
        }else{
            return false;
        }*/
    }else{
        return false;
    }
       
}

bool checkPalindrome(char input[]) {
    // Write your code here
    bool result = checkPalindromeHelper(input, 0, strlen(input) - 1);
    return result;
}

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here

    if(n == 0){
        return;
    }
    
    // Move n - 1 rods from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary  );
    cout << "Moving " << n << " rod from " << source << " to " << destination << endl;
    // Move n - 1 rods from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source,destination);

    
}


int main(){
	int n = 5;
	int input[] = {4,8,2,1,3};
	cout << sum(input, n) << endl;
	//	cout << fact(n) << endl;
}

