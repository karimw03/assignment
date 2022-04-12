#ifndef dog_h
#define dog_h

#include <iostream>
#include "animal.h"
using std::cout;

class Dog :public Animal {
private:
	int breed;

public:
	Dog(int, int, int);
	~Dog();
	void print() {
		Animal::print();
		cout << "Dog print\n";
	}
	virtual void getOwner() { cout<<"\nOwner: Dog"; }
};

#endif
