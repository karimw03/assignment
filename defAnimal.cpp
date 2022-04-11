#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal(int n, int a) {
	cout << "Animal created\n";
	name = n;
	age = a;
}

Animal::~Animal() {
	cout << "Animal destroyed\n";
}

Dog::Dog(int n,int a,int b) :Animal(n, a) {
	cout << "Dog created\n";
	breed = b;
}

Dog::~Dog() {
	cout << "Dog destroted\n";
}

Cat::Cat(int n, int a, int pSize, int c) :Animal(n, a) {
	cout << "Cat created\n";
	pawSize = pSize;
	color = c;
}

Cat::~Cat() {
	cout << "Cat destroyed\n";
}

Fish::Fish(int n, int a, int gCap, int sS) :Animal(n, a) {
	cout << "Fish created\n";
	gillCapacity = gCap;
	swimSpeed = sS;
}

Fish::~Fish() {
	cout << "Fish destoryed\n";
}
