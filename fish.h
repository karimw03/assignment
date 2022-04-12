#ifndef fish_h
#define fish_h
#include <iostream>
using std::cout;

class Fish :public Animal {
private:
	int gillCapacity;
	int swimSpeed;

public:
	Fish(int, int, int, int);
	~Fish();
	virtual void getOwner() { cout << "\nOwner: Fish\n\n"; }
};
