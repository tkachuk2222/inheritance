#pragma once
using namespace std;

class Animal
{
protected:
	int age_;
	Animal() :age_(0) {};
	Animal(int age) :age_(age) {};
	//Animal(Cat c, Dog d, Parrot p);
	void show() { cout << "Animal: " << age_ << endl; }
public:
//	~Animal();
};
class Cat : public Animal {
private:
	string name_;
public:
	Cat() :name_("") {};
	Cat(string n, int age);
	void show() { cout << "Cat name: " << name_ << endl; Animal::show(); }
};
Cat::Cat(string n, int c)
	:Animal(c) {
	name_ = n;
}

class Dog : public Animal {
private:
	string name_;
public:
	Dog() :name_("") {};
	Dog(string n, int age)
		:Animal(age)
	{
			name_ = n;
	}
	void show() { cout << "Dog name: " << name_ << endl; Animal::show(); }
};

class Parrot : public Animal {
private:
	string name_;
public:
	Parrot() :name_("") {};
	Parrot(string n, int age)
		:Animal(age)
	{
		name_ = n;
	}
	void show() { cout << "Parrot name: " << name_ << endl; Animal::show(); }
};