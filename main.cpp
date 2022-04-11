#include "animal.h"

void printAnimal(Animal* a) {
	a->print();
}

int main() {
	Dog d = Dog(1, 2, 3);
	Cat c = Cat(4, 5, 6, 7);
	Fish f = Fish(8, 9, 0, 1);
	
	Animal* arrayAnimal[3];
	arrayAnimal[0] = &d;
	arrayAnimal[1] = &c;
	arrayAnimal[2] = &f;

	for (int i = 0; i < 3; i++) {
		printAnimal(arrayAnimal[i]);
	}
}
