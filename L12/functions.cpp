#include<iostream>
using namespace std;
//int sum(int, int);

/*

int sum(int a){
	return a + 1;
}

int sum(int a, int b){
	return a + b;
}
int sum(int a, int b, int c){
	return a + b + c;
}
double sum(double a, double b){
	return a + b;
}

*/
/*double sum(int a, int b){
	return a + b;
}*/

int sum(int a, int b, int c = 1){
	return a + b + c;
}


int main(){
	cout << sum(5) << endl;
	cout << sum(5, 15) << endl;
	cout << sum(5, 15, 10) << endl;
}





