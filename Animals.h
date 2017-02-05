#pragma once
class Animal
{
public:
	Animal(string name) : name_(name) {};
	virtual ~Animal() {};
	virtual void show() { };
	//	virtual void show() = 0  тільки віртуальні методи можна = 0("чисто віртуальний")

	virtual void sound() {};
	virtual void podvid() {};

protected:
	string name_;
};

class Dog:public Animal
{
public:
	Dog(string name) :podvid_("Ссавець"), Animal(name), sound_("gaw-gaw!!") {};
	virtual ~Dog() {};
	virtual void show() override { cout << name_ << "\t";};
	virtual void sound()override { cout << sound_ << endl; };
	virtual void podvid()override { cout << podvid_ << endl; };

private:
	string podvid_;
	string sound_;
};

class Cat :public Animal
{
public:
	Cat(string name) :podvid_("Ссавець"), Animal(name), sound_("meooowww") {};
	virtual ~Cat() {};
	virtual void show() override { cout << name_ << "\t";};
	virtual void sound()override { cout << sound_ << endl; };
	virtual void podvid()override { cout << podvid_ << endl; };
	//virtual voi
private:
	string podvid_;
	string sound_;
};

class Parrot :public Animal
{
public:
	Parrot(string name) :podvid_("Птах"), Animal(name), sound_("Все шо почує") {};
	virtual ~Parrot() {};
	virtual void show() override { cout << name_ << "\t";};
	virtual void sound()override { cout << sound_ << endl; };
	virtual void podvid()override { cout << podvid_ << endl; };

private:
	string podvid_;
	string sound_;
};

class Rodent :public Animal
{
public:
	Rodent(string name) :podvid_("Гризун"), Animal(name), sound_("Нічого") {};
	virtual ~Rodent() {};
	virtual void show() override { cout << name_ << "\t" ; };
	virtual void sound()override { cout << sound_ << endl; };
	virtual void podvid()override { cout << podvid_ << endl; };

private:
	string podvid_;
	string sound_;
};