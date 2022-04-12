#ifndef cat_h
#define cat_h

#include <iostream>
#include "animal.h"
using std::cout;

class Cat :public Animal {
private:
	int color;
	int pawSize;

public:
	Cat(int, int, int, int);
	~Cat();
	void print() {
		Animal::print();
		cout << "Cat print\n";
	}
	virtual void getOwner() { cout << "\nOwner: Cat"; }
};

#endif
