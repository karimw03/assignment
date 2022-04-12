#include <iostream>
#include "dog.h"
#include "animal.h"
using std::cout;

Dog::Dog(int n,int a,int b) :Animal(n, a) {
	cout << "Dog created\n";
	breed = b;
}

Dog::~Dog() {
	cout << "Dog destroted\n";
}
