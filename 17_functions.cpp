#include <iostream>
using namespace std;
#include <string>

//void function 
//void myVoidFunc(){
//	cout << "Running the void fucntion";
//	//	it does not requires return any thing
//}
//
//int main(){
//	myVoidFunc(); // void function should be called in main func
//	return 0;
//}

//attendance log fun 
//void attLog(string name, string val ){
//	cout << name <<" - "<< val<<"\n";
//}
//
//int main(){
//	string xName = "Reddy";
//	string xVal = "P";
//	
//	string yName = "Suresh";
//	string yVal = "A";
//	
//	attLog(xName, xVal);
//	attLog(yName, yVal);
//	
//	return 0;
//}

//void loan(int salary){
//	if(salary>100000){
//		cout << "Offered Loan = "<<250000;
//	}else if(salary > 50000){
//		cout << "Offered Loan = "<<150000;
//	}else if(salary > 25000){
//		cout << "Offered Loan = "<<75000;
//	}else if(salary > 15000){
//		cout << "Offered Loan = "<<25000;
//	}else {
//		cout << "Can not offer loan";
//	}
//}
//
//int main(){
//	int sal;
//	cout << "Enter your salary = ";
//	cin >> sal;
//	loan(sal);
//	
//	return 0;
//}


//default values 
//void country_chek(string name = "India"){
//	cout << name<<"\n";
//}
//
//int main(){
//	country_chek("USA");
//	country_chek("UK");
//	country_chek();
//	country_chek("Singapore");
//	return 0;
//}


//string visa(string countryName){
//	if(countryName == "India"){
//		return "VISA not required";
//	}
//	return "VISA required";
//}
//
//int main(){
//	string val1 = visa("USA");
//	string val2 = visa("India");
//	cout << val1<<"\n";
//	cout << val2 << "\n";
//	return 0;
//}


//simple calculator 

//int calc(int x, int y, int calop){
//	switch(calop){
//		case 1:
//			return x+y;
//		case 2:
//			return x-y;
//		case 3: 
//			return x*y;
//		case 4:
//			return x/y;	
//	}
//}
//
//int main(){
//	int x, y, op;
//	cout << "Enter x = ";
//	cin >> x;
//	cout << "Enter y = ";
//	cin >> y;
//	cout << "Enter operator as 1 for add, 2 for sub, 3 for multiply, 4 for div = ";
//	cin >> op;
//	
//	int value = calc(x, y, op);
//	cout << "Output is = "<<value;
//	return 0;
//}

//passing array to the functon 
//void myfunc(int myarray[5]){
//	for(int i=0; i<5; i++){
//		cout << myarray[i]<<"\n";
//	};
//}
//
//int main(){
//	int myarr[5] = {10,20,30,40,50};
////	cout << sizeof(myarr)<<"\n";
////	cout << sizeof(int);
//	myfunc(myarr);
//	return 0;
//}

//swapping of numbers 
//void swapNumbers(int &x, int &y){
//	int z = x;
//	x = y;
//	y = z;
//}
//
//int main(){
//	int x = 5;
//	int y = 20;
//	cout << "Before => value of num 1 = "<<x<<" and num 2 = "<<y<<"\n";
//	swapNumbers(x, y);
//	cout << "After swapping => value of num 1 = "<<x<<" and num 2 = "<<y<<"\n";
//	return 0;
//}

//FUNCTION OVERLOADING

//int adder(int a, int b){
//	return a+b;
//}
//double adder(double a, double b){
//	return a+b;
//}
//
//int sub(int a, int b){
//	return a-b;
//}
//
//double sub(double a, double b){
//	return a -b;
//}
//int main(){
//	cout << "adding 3+2 using adder = "<<adder(3,2)<<"\n";
//	cout << "adding 3.7+2.7 using adder = "<<adder(3.7,2.7)<<"\n";
//	
//	cout << "subtracting 5-2 using adder = "<<sub(5,2)<<"\n";
//	cout << "subtracting 5.7 - 2.3 using adder = "<<sub(5.7,2.3)<<"\n";
//}


//RECURSION

//int sum(int x){
//	if(x >0){
//		return x + sum(x-1);
//	}else{
//		return 0;
//	}
//}
//
//int main(){
//	int result = sum(10);
//	cout << result;
//	return 0;
//}


//function to find the factorial of a number 
int factorial(int x){
	if(x>1){
		return x * factorial(x-1);
	}else{
		return 1;
	}
}

int main(){
	int result = factorial(10);
	cout << result;
	return 0;
}
