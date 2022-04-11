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
	virtual void getOwner() = 0;
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
	virtual void getOwner() { cout<<"\nOwner: Dog"; }
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
	virtual void getOwner() { cout << "\nOwner: Cat"; }
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
