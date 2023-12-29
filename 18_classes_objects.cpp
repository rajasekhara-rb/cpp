#include <iostream>
using namespace std;

//object oriented programming
//classes and objects in C++

//class myClass { //the class
//		public:   // access specifier allows to use in outside of class
//			int myNum;
//			string myString;
//	};
//
//int main(){
//	myClass myObj;
//	myObj.myNum = 15;
//	myObj.myString = "Learing C++ classes and Objects";
//	
//	cout << myObj.myNum<<"\n";
//	cout << myObj.myString<<"\n";
//	return 0;
//}


//class Car{
//	public:
//		string brand;
//		string model;
//		int year;
//};
//
//int main(){
//	
//	Car carObj1;
//	carObj1.brand = "BMW";
//	carObj1.model = "X5";
//	carObj1.year = 1999;
//	
//	Car carObj2;
//	carObj2.brand = "Ford";
//	carObj2.model = "Mustang";
//	carObj2.year = 1969;
//	
//	cout << carObj1.brand << " " <<carObj1.model<<" "<<carObj1.year<<"\n";
//	cout << carObj2.brand << " " <<carObj2.model<<" "<<carObj2.year<<"\n";		
//	return 0;
//}


//class methods 

//class MyClass {
//	public:
//		void myMethod(){
//			cout << "Hello World from myMethod \n";
//		};
//		void method2();
//};
//
////defining the method/function ouside of class using ::
//void MyClass::method2(){
//	cout << "Hello world form method 2 \n";
//}
//
//int main(){
//	MyClass myObj;
//	myObj.myMethod();
//	myObj.method2();
//	return 0;
//}


class Car {
	public:
		int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
	return maxSpeed;
};

int main(){
	Car obj;
	cout << obj.speed(250);
	return 0;
}
