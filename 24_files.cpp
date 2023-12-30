#include <iostream>
#include <fstream> // fstram library used to work with files 
using namespace std;

//Files handing in C++

//ofstream	Creates and writes to files
//ifstream	Reads from files
//fstream	A combination of ofstream and ifstream: creates, reads, and writes to files

int main(){
	
//	creating file
	ofstream myFile("fileUsingC++.txt"); // creates and opens file
	
//  writing to file
	myFile << "Files content written from code using C++ \n next line added next time"; // writes to the files
	
	myFile.close(); // closes the file.
	
	
//	Reading file 
	string mytext;
	ifstream myFileRead("fileUsingC++.txt");
	
//	reading line by line from the file 
	while(getline(myFileRead, mytext)){
		cout << mytext <<"\n";
	}
	
	myFileRead.close(); // closes file
	
	return 0;
}
