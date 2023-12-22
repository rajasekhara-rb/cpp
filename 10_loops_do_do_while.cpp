#include <iostream>
using namespace std;

//while loops

//int main(){
//	int i = 0;
//	while(i<10){
//		cout << i << "\n";
//		i++;
//	}
//	
//	return 0;
//}

//int main(){
//	int val;
//	cout << "Enter a value int = ";
//	cin >> val;
//	while (val>0){
//		cout << val<< "\n";
//		val--;
//	}
//	
//	return 0;
//}


//do while loop 

//int main(){
//	int i = 0;
//	do{
//		cout << i << "\n";
//		i++;
//	}while(i<5);
//}


int main(){
	int sub = 25;
	
	while (sub>=10){
		cout <<"subscriprion valid "<< sub<<"\n";
		sub--;
	}
	
	do{
		cout <<"!!! Warning. Your subscription is about to expire "<< sub<<"\n";
		sub--;
	}while(sub > 1);
	
	if(sub == 1){
		cout << "Your subscription is expiring Recharge immediately to stop service \n";
		sub--;
	}
	if(sub == 0){
		cout << "Subscription is ended";
	}
	
	return 0;	
}








