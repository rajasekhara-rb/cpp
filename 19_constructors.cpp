#include <iostream>
using namespace std;

// constructors in C++

//class Cars{ // class
//	public: // access specifier
//		Cars(){ // constructor
//			cout << "Hello world form constructor \n";
//		}
//};
//
//int main(){
//	Cars BWM; // calling the constructor directaly	
//	return 0;
//}


//constructor with parameters 

//class Cars{ // class
//	public:
//		string brand; // attribute
//		string model;
//		int year;
//		
//		Cars(string x, string y, int z){ // constructor with parameters
//			brand = x;
//			model = y;
//			year = z;
//		}
//};
//
//int main(){
//	Cars carObj1 = Cars("BMW", "X5", 1999); // creating cars object and calling constructor with values
//	Cars carObj2 = Cars("Ford", "Mustang", 1969);
//	
//	cout << carObj1.brand <<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
//	cout << carObj2.brand <<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
//	return 0;
//}


//constructor defining outside of the class using ::

class Cars{
	public:
		string brand;
		string model;
		int year;
		Cars(string x, string y, int z);
};

Cars::Cars(string x, string y, int z){
	brand  = x;
	model = y;
	year = z;
}

int main(){
	Cars obj1 = Cars("BMW", "X5", 1999);
	Cars obj2 = Cars("Ford", "Mustang", 1969);
	
	cout << obj1.brand <<" "<<obj1.model<<" "<<obj1.year<<"\n";
	cout << obj2.brand <<" "<<obj2.model<<" "<<obj2.year<<"\n";
	return 0;
}








