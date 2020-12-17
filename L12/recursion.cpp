#include<iostream>
#include<string>
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

/*
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
*/
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

void replaceCharacter(char input[], char c1, char c2) {
	if(input[0] == '\0'){
		return;
	}

	if(input[0] == c1){
		input[0] = c2;
	}
	replaceCharacter(input + 1, c1, c2);
}


void removeDuplicates(char input[]){
	// Base Case -> Length 0 or Length 1
	if(input[0] == '\0' || input[1] == '\0'){
		return;
	}
	if(input[0] == input[1]){
		// Remove 0th char by shifting elements to left
		int i = 1;
		for(; input[i] != '\0'; i++){
			input[i - 1] = input[i];
		}
		input[i - 1] = input[i];
		// Input here and not input + 1 because we have removed 0th char already
		removeDuplicates(input);
	}else{
		removeDuplicates(input + 1);
	}
}
int binarySearch(int input[], int start, int  end, int element){
	if(start > end){
		// Range exhausted and element not found
		return -1;
	}
	int mid = (start + end)/ 2;
	if(input[mid] == element){
		return mid;
	}else if(input[mid] < element){
		return binarySearch(input, mid + 1, end, element);
	}else{
		return binarySearch(input, start, mid - 1, element);
	}
}

int binarySearch(int input[], int size, int element) {
	return binarySearch(input, 0, size - 1, element);
}

int subsequences(string str, string output[]){

	if(str.length() == 0){
		output[0] = "";
		return 1;
	}

	string smallOutput[1000];
	int smallCount = subsequences(str.substr(1), smallOutput); 
	// SmallOutput has all subsequences of str.substr(1)

	int k = 0;
	for(int i = 0; i < smallCount; i++){
		output[k++] = smallOutput[i];
	}
	for(int i = 0; i < smallCount; i++){
		//output[i + smallCount] = str[0] + smallOutput[i];
		output[k++] = str[0] + smallOutput[i];
	}
	return k;
	//return 2 * smallCount;	
}


string options(int digit){
	
	switch(digit){
		case 2:
			return "abc";
		case 3:
			return "def";
		case 4:
			return "ghi";
		default: 
			return "";
	}

	/*if(digit == 2){
		return "abc";
	}else if(digit == 3){
		return "def";
	}else if(digit == 4){

	}else{
		return "";
	}*/
}

int keypad(int num, string output[]){
	if(num == 0){
		output[0] = "";
		return 1;
	}
	string options[] = {"","","abc","def","ghi"};
	string smallOutput[1000];
	
	int smallCount = keypad(num / 10, smallOutput);
	// After above recursion call you can assume that smallOutput has all keypad combinations for num / 10

	string lastDigitOptions = options[num % 10];

	int k = 0;

	// i loop will travel over all char options for lastDigit
	for(int i = 0; i < lastDigitOptions.length(); i++){
		// j loop will travel for all strings in smallOutput
		for(int j = 0; j < smallCount; j++){
				output[k++] = smallOutput[j] + lastDigitOptions[i];
		}
	}
	return k;
	// return smallCount * lastDigitOptions.length();
}


int main(){
	
	string output[1000];
//	string str = "xyz";
//	int count = subsequences(str, output);
		int n = 234;
		int count = keypad(n, output);
	for(int i = 0; i < count; i++){
		cout << output[i] << endl;
	}

	
	//int n = 5;
	//int input[] = {4,8,2,1,3};
	//cout << sum(input, n) << endl;
	//	cout << fact(n) << endl;
}

