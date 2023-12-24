#include <iostream>
#include <string>
using namespace std;

//pointers in C++

//int main(){
//	string food = "Pizza";
//	string* ptr = &food; // pointer syntax
//	cout << "value of the var food = "<<food<<"\n";
//	cout << "Memory loc. of var food = "<<&food<<"\n";
//	cout << "pointer value of var ptr = "<<ptr<<"\n";
//	cout << "Dereference of var ptr = "<<*ptr<<"\n"; // dereferencing pointer value
//	
//	return 0;
//}


int main(){
	string food = "Pizza";
	string* ptr = &food;
	cout << "Value of food var     = "<<food<<"\n";
	cout << "Value of ptr var      = "<<ptr<<"\n";
	cout << "dereferencing of ptr  = "<<*ptr<<"\n";
	//	changing of the value in memory 
	*ptr = "Burger";
	cout << "Value of ptr after change = "<<*ptr<<"\n";
	cout << "Value of food after change = "<<food<<"\n";
	return 0;
}
