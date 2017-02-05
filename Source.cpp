#include <iostream>
#include <stdio.h>
#include<string>
#include <math.h>
#include"passport.h"
#include "student.h"
//#include"home_animals.h"
#include"Bank.h"
#include"Animals.h"
#include"withFiles.h"
#include "AbstractClass1.h"


using namespace std;

void homAnim() {
	//Parrot pt("Baxter", 3);
	//Dog dg("Dexter", 15);
	//Cat ct("Simon", 6);
	//Animal an;
}

void student() {
	Student st("anna", "ked'");
	st.show();
	Aspirant ast(st, "programyvannia");
	ast.show();
}

void passport() {
	Passport pt("ivan", "tkachuk", "234523");
	pt.Show();
	Passport ptt("didur", "sergey", "123rt4545");
	ptt.Show();
	ForeignPassport fp("TKACHUK", "IVAN", "ET454545", "business", "34563456");
	fp.Show();
	ForeignPassport fp2(ptt, "work", "34545");
	fp2.Show();
}
void bank() {
	BankAccount ba("Tkachuk Ivan", 1234343445, 10000);
	Overdraft od(ba, 10);
	od.show();
	od.pay(1000);
	od.show();
	od.takeMoney(11200);
	od.show();
}

void animals() {
	Animal *an[4] = { new Dog("DOG"),
		new Cat("CAT"),
		new Parrot("Parrot"),
		new Rodent("Rodent")
	};
	for (auto i = 0; i < 4; ++i)
	{
		an[i]->show();
		an[i]->sound();
		an[i]->podvid();
	}
}
void infile() {
	OpenRead or ;
	char path[100];
	cout << "enter the path to the file(with name of file)\n";
	cin.getline(path, 100);
	or .Display(path);
	cout << endl << endl;
	OpenReadASCII ora;
	ora.Display(path);
	MyClass oror;
	oror.Display(path);
}
void rivniannia() {
	Equation *eq[2] = { new Lineal(2,4), new Kvadrat(5,6,6) };
	for (auto i = 0; i < 2; ++i)
		eq[i]->equation();
	for (auto i = 0; i < 2; ++i)
		eq[i]->showRes();

}
void main() {
	setlocale(LC_ALL, "ukr");
	rivniannia();
}