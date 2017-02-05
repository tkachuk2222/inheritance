#pragma once
using namespace std;

class Student
{
private:
	string name_, lname_;
public:
	Student() :name_("Null"), lname_("Null") {};
	Student(string, string);
	void show();
};
class Aspirant:public Student
{
private:
	string subj_;
public:
	Aspirant(){};
	Aspirant(Student, string);
	Aspirant(string, string, string);
	void show();
};

Student::Student(string name, string lname) {
	name_ = name;
	lname_ = lname;
}
void Student::show() {
	cout << "Ім'я: " << name_ << endl;
	cout << "Прізвище: " << lname_ << endl;
}
Aspirant::Aspirant(Student st, string sub)
	:Student(st){
	subj_ = sub;
}
Aspirant::Aspirant(string name, string lname, string sub)
	: Student(name, lname){
	subj_ = sub;
}
void Aspirant::show() {
	Student::show();
	cout << "Предмет: " << subj_ << endl;
}