#include <iostream>
#include <string>
using namespace std;

//int main(){
//	string x = "Hello";
//	cout << x;
//	return 0;
//}

//concatination using "+";

//int main(){
//	string fname, lname;
//	cout << "enter your first name = \n";
//	cin >> fname;
//	cout << "enter your last name = \n";
//	cin >> lname;
//	cout << "your name is = "<<fname + " " + lname;
//	return 0;
//}

//int main(){
//	int x, y;
//	string a,b;
//	cout<<"int x = ";
//	cin >> x;
//	cout << "int y = ";
//	cin >> y;
//	cout << x+y<<"\n";
//	cout << "string a = ";
//	cin >> a;
//	cout << "string b = ";
//	cin >> b;
//	cout<< a+b; 
//	return 0;
//}

//append for concatination

//int main(){
//	string x = "Rajasekhara";
//	string y = "Reddy";
//	string z;
//	z = x.append(y);
//	cout << z;
//	return 0;
//}


//indexing in strings 

//int main(){
//	string x;
//	cout << "This is a sample string = ";
//	cin >> x;
//	x[0] = 'I'; // single qoutes are needs can not use double qoutes
//	cout << "Your country = "<<x;
//	return 0;
//}


// print => "we in india beleve in peace;
//int main(){
//	string a = "We at \"India\" believe in peace \n";
//	cout << a;
//	string b = "It\'s India \n";
//	cout << b;
//	string c = "This is a tab \t with slasht \n";
//	cout << c;
//	return 0;
//}

//finding the length of string 

//int main(){
//	string txt = "abcdefghijklmnopqrstuvwxyz";
//	cout << "The length of the text "<< txt <<" is = "<< txt.length() <<endl;
//	cout << "The length of the text "<< txt <<" is = "<< txt.size();
//	return 0;
//}

//inputs of strings as different words with spaces 
int main(){
	string fullname;
	cout << "Enter your full name = ";
//	cin>> fullname;
	cout <<fullname <<"\n"; //(cin used so words after space are not getting)
//	cout <<"Enter you name = ";
	getline(cin, fullname); // gives the full line with spaces also which is not possible with only cin
	cout << fullname;
	return 0;
}









