#include <iostream>
using namespace std;
#include <string>

//references

//int main(){
//	string food = "Pizza";
//	string &meal = food; // reference made with using &;
//	
//	cout << food <<"\n";
//	cout << meal << "\n";
//	
//	return 0;
//}

//adding reference of int

//int main(){
//	int x = 10;
//	int y = 20;
//	
//	int &a = x;
//	int &b = y;
//	
//	cout << a+b;
//	return 0;
//}



//memory address of a variable 
int main(){
	string food = "Rice";
	string &meal = food;
	cout << "This is meal reference of food = "<< meal <<"\n";
	cout << "memory address of meal = " << &meal <<"\n";
	return 0;
}
