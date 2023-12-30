#include <iostream>
using namespace std;

	// Exceptions try, throw, catch

//int main(){
//	try{ // try block will execute the code
//		int age = 15;
//		if(age >= 18){
//			cout << "Access Granted";
//		}else{
//			throw(age); // exception or error
//		}
//		
//	}catch(int myNum){ // catch bolock excutes if any error by catching the errow from throw
//		cout << "Access Denied - You must be of 18 years old. \n";
//		cout << "Age is : "<< myNum;
//	}
//	return 0;
//}


int main(){
	try{ // try block will execute the code
		int age = 15;
		if(age >= 18){
			cout << "Access Granted";
		}else{
			throw 505; // we can use custom error code or numbers
		}
		
	}catch(...){ // if dont know throw type we use ... syntax to catch automatically
		cout << "Access Denied - You must be of 18 years old. \n";
	}
	return 0;
}
