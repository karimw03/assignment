#include <iostream>
#include "animal.h"
using std::cout;

Animal::Animal(int n, int a) {
	cout << "Animal created\n";
	name = n;
	age = a;
}

Animal::~Animal() {
	cout << "Animal destroyed\n";
}

Fish::Fish(int n, int a, int gCap, int sS) :Animal(n, a) {
	cout << "Fish created\n";
	gillCapacity = gCap;
	swimSpeed = sS;
}

Fish::~Fish() {
	cout << "Fish destoryed\n";
}
