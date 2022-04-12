#ifndef animal_h
#define animal_h
#include <iostream>
using std::cout;

class Animal{
private:
	int name;
	int age;

public:
	Animal(int, int);
	~Animal();
	virtual void print() {
		cout << "Animal print\n";
	}
	virtual void getOwner() = 0;
};

class Fish :public Animal {
private:
	int gillCapacity;
	int swimSpeed;

public:
	Fish(int, int, int, int);
	~Fish();
	virtual void getOwner() { cout << "\nOwner: Fish\n\n"; }
};

#endif
