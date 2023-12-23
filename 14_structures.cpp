#include <iostream>
#include <string>
using namespace std;

//structures 

//int main(){
//	struct {
//		int x;
//		string y;
// 	} lu_structure;
// 	
// 	lu_structure.x = 2023;
// 	lu_structure.y = "Learning C++ in";
// 	
// 	cout << lu_structure.y << " "<< lu_structure.x;
//	return 0;
//}


//int main(){
//	
//	struct{
//		int id;
//		string name;
//	} s1, s2, s3, s4;
//	
//	//	data entry 
//	
//	s1.id = 1;
//	s1.name = "Reddy";
//	
//	s2.id = 2;
//	s2.name = "Suresh";
//	
//	s3.id = 3;
//	s3.name = "Naresh";
//	
//	s4.id = 4;
//	s4.name = "Kagesh";	
//	
//	cout << "Student 1 = "<< s1.id <<" - "<< s1.name<<"\n";
//	cout << "Student 2 = "<< s2.id <<" - "<< s2.name<<"\n";
//	cout << "Student 3 = "<< s3.id <<" - "<< s3.name<<"\n";
//	cout << "Student 4 = "<< s4.id <<" - "<< s4.name<<"\n";
//	return 0;
//}


//Named structure 

int main(){
	struct cars{
		int year;
		string model;
	};
	cars car1;
	car1.year = 2010;
	car1.model = "Maruti Swift";
	
	cout << car1.model << " - " << car1.year;
	
	return 0;
}
