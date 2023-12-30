#include <iostream>
using namespace std;

// Inheritance 
	// reusing and extending the methods from one class to other

//class Vehicle{ // base class or parent class
//	public:
//		string brand = "Ford";
//	void honk(){
//		cout << "tuut tuut ! \n";
//	}
//};
//
//class Car : public Vehicle{ // derived class or child class
//	public:
//		string model = "Mustang";
//}; 
//	
//int main(){
//	Car myCar;
//	myCar.honk();
//	cout << myCar.brand<<" "<<myCar.model<<"\n";
//	
//	return 0;
//}

// Multilevel inheritance


//class MyClass{ // base class parent
//	public:
//		void myfunc(){
//			cout << "This is multilevel inheritance \n";
//		}
//};
//
//class MyChild : public MyClass{ // derived class child
//};
//
//class MyGrandChild: public MyChild{	// derived class grandchild
//};
//
//int main(){
//	MyGrandChild myObj;
//	myObj.myfunc();
//	return 0;
//}
//


//Multiple Inheritance 

//class MyClass { // base class
//	public:
//		void myFun(){
//			cout <<"This is from MyClass \n";
//		}
//};
//
//class MyOtherClass{ // other base class
//	public:
//		void myOtherFun(){
//			cout << "This is from MyOtherClass \n";
//		}
//};
//
//class MyChildClass: public MyClass, public MyOtherClass{
//	
//};
//
//int main(){
//	MyChildClass myObj;
//	myObj.myFun();
//	myObj.myOtherFun();
//	return 0;
//}

// Access specifier protected 

class Employee{ // base class
	protected: // protected access specifier
		int salary;
};

class Programmer : public Employee{ // derived class
	public:
		int bonus;
		void setSalary(int s){
			salary = s;
		};
		int getSalary(){
			return salary;
		};
};

int main(){
	Programmer obj;
	obj.setSalary(50000);
	obj.bonus = 15000;
	cout << "Salary is = "<<obj.getSalary()<<"\n";
	cout << "Bonus is = "<< obj.bonus;
	return 0;
}



