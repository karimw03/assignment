#include <iostream>
#include "cat.h"
using std::cout;

Cat::Cat(int n, int a, int pSize, int c) :Animal(n, a) {
	cout << "Cat created\n";
	pawSize = pSize;
	color = c;
}

Cat::~Cat() {
	cout << "Cat destroyed\n";
}
