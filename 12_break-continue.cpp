#include <iostream>
using namespace std;

//break usage 

//int main(){
//	int count = 1;
//	for(int i=0; i<20; i++){
//		if(i==7){
//			cout << "Roll number 7 found \n";
//			break;
//		}else{
//			cout << "Roll no not found attempt = "<< count << "\n";
//			count ++;
//		}
//	}
//	return 0;
//}

//continue usage 

//int main(){
//	int count = 1;
//	for(int i=0; i<20; i++){
//		if(i==8){
//			cout << "Roll no 8 found. Task given, continuing with attendance \n";
//			continue;
//		}else{
//			cout << "Roll no Not found. attempt "<<count <<"\n";
//			count ++;
//		}
//	}
//	return 0;
//}



//break using while loop
int main(){
	int i =0;
	while(i<100){
		if(i==11){
			cout << "11 found \n";
			break;
		}else{
			cout << "Attempt = "<<i<<"\n";
		}
		i++;
	}
	return 0;
}
