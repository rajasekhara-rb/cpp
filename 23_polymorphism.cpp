#include <iostream>
using namespace std;

// PolyMorphism means many forms
// when classes are conntect to each other by inheritance

class Animal{ // base class
	public:
		void animalSound(){
			cout << "This animal makes sound \n";
		}
};

class Dog : public Animal{ // derived class
	public :
		void animalSound(){
			cout << "This is Dog. Bow Bow \n"; // overriding the animal sound
		}
};

class Cat : public Animal{ // derived class
	public :
		void animalSound(){
			cout << "This is cat. Meow Meow \n"; // overriding the animal sound
		}
};

int main(){

	Animal myAnimal;
	Dog myDog;
	Cat myCat;
	
	myAnimal.animalSound();
	myDog.animalSound();
	myCat.animalSound();
	return 0;
}
