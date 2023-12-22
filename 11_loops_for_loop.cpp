#include <iostream>
using namespace std;

//for loop

//int main(){
//	for(int i=0; i<10; i++){
//		cout << i << "\n";
//	}
//	return 0;
//}

//table for loop 

int main(){
	int val;
	cout << "Enter a number to get table = ";
	cin >> val;
	
	for(int i=1; i<=10; i++){
		cout << val << " X "<< i << " = " << val * i << "\n";
	}
	return 0;
}
