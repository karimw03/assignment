#ifndef animal_h
#define animal_h
#include <iostream>
using namespace std;

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
	virtual char getOwner() = 0;
};

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
	virtual char getOwner() { return 'd'; }
};

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
	virtual char getOwner() { return 'c'; }
};

class Fish :public Animal {
private:
	int gillCapacity;
	int swimSpeed;

public:
	Fish(int, int, int, int);
	~Fish();
	virtual char getOwner() { return 'f'; }
};

#endif
