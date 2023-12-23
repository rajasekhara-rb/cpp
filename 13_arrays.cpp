#include <iostream>
using namespace std;

//int main(){
//	string products[] = {"product 1", "product 2", "product 3", "product 4", "product 5"};
//	int my_array[] = {1, 2, 3, 4, 5};
//	
//	cout << products[2]<<"\n";
//	products[2] = "xyz";
//	cout << products[2];
//	return 0;
//}

//int main(){
//	string cars[5] = {"BMW", "Audi", "Mahindra", "Maruti", "Tata"};
//	
//	for(int i : cars){
//		cout << i<<"\n";
//	}
//	
//	return 0;
//}

//int main(){
//	string products[] = {"product 1", "product 2", "product 3", "product 4", "product 5"};
//	cout << "cout array = " <<products<<"\n";
//	cout << "size of products array = "<<sizeof(products)<<"\n";
//	cout << "size of string object size = "<<sizeof(string)<<"\n";
//	cout << "length of array = "<< sizeof(products)/sizeof(string);
//	return 0;
//}

//int main(){
//	string cars[5] = {"BMW", "Audi", "Mahindra", "Maruti", "Tata"};
//	for(int i=0; i<sizeof(cars)/sizeof(string); i++){
//		cout << cars[i] <<"\n";
//	}
//	return 0;
//}


//multi dimentional array 

//int main(){
//	int my_arr[2][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}};
//	cout << my_arr[0][3];	
//	return 0;
//}


//int main(){
//	string lang[2][2][2] = {{{"c", "c++"}, {"Java", "Python"}}, {{"Go", "C#"},{"PHP", "JavaScript"}}};
//	//	print first elemt, second item, first value
//	cout << lang[0][1][0];
//	return 0;
//}

//	changing the values in mulidimentional array 

//int main(){
//	string lang[2][2][2] = {{{"c", "c++"}, {"Java", "Python"}}, {{"Go", "C#"},{"PHP", "JavaScript"}}};
//	cout << lang[1][0][0]<<"\n";
//	lang[1][0][0] = "Go lang";
//	cout << lang[1][0][0];
//	return 0;
//}

//loop through multidimentional arrays 

//int main(){
//	string letters[2][4]={{"A", "B", "C", "D"},{"E", "F", "G", "H"}};
//	
//	for(int i=0; i<2; i++){
//		for(int j=0; j<4; j++){
//			cout << letters[i][j]<<"\n";
//		}
//	}
//	
//	return 0;
//}


//battleship game 

int main(){
	bool ships[10][10] ={
	{1, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }
	};
	
	int totalHitsGiven = 10;
	int hits = 0;
	int numberOfTurns = 0;
	
	while(hits < totalHitsGiven){
		int row, col;
		
		cout << "Selecting the coordinates \n";
		cout << "Select row between 0 to 9 = ";
		cin >> row;
		cout << "Select column between 0 to 9 = ";
		cin >> col;
		
		if(ships[row][col]){
			ships[row][col] = 0;
			hits++;
			cout << "It's a HIT "<<totalHitsGiven-hits<<" left \n";
		}else{
			cout << "Missed \n";
			totalHitsGiven--;
		}
		numberOfTurns++;	
	}
	
	cout << "Victory \n";
	cout << "You won in "<<numberOfTurns << "turns \n";
		
	return 0;
}

