#include <iostream>
using namespace std;

//access specifiers in classes

class MyClass{
	public: // public access specifier
	//	can be accessed / modified from outside of the class
		int x;
	private: // private access specifier
	//	cannot be accessed / modified from outside of the class
		int y;
//		bydefautl all are private if not specified as public
};

int main(){
	MyClass obj;
	obj.x = 25;
//	obj.y = 10; error occured as y is private
	return 0;
}
