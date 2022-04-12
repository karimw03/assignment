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
