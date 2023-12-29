#include <iostream>
using namespace std;

 // Encapsulation 
 // encapusation is hiding the sensitive data from the users using private access specifiers
 // set and get is used to access private data
 
 class Employee {
 	private :
 		int salary; // private info
 	public:
 		//setter
 		void setSalary(int s){
 			salary = s;
		 };
		 //getter
		 int getSalary(){
		 	return salary;
		 }
 };
 
int main(){
	Employee obj;
	obj.setSalary(50000);
	cout << obj.getSalary();	
	return 0;
}
