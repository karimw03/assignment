#include <iostream>
#include "fish.h"
using std::cout;

Fish::Fish(int n, int a, int gCap, int sS) :Animal(n, a) {
	cout << "Fish created\n";
	gillCapacity = gCap;
	swimSpeed = sS;
}

Fish::~Fish() {
	cout << "Fish destoryed\n";
}
