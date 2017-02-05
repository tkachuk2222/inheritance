#pragma once
using namespace std;

class Passport
{
private:
	string name, lname, serial;
public:
	Passport() :name("Null"), lname("Null"), serial("Null") {}
	Passport(string name, string lname, string serial);
	~Passport() {}
	void Show() const;
};

class ForeignPassport : public Passport
{
private:
	string id, visa;
public:
	ForeignPassport() {}
	ForeignPassport(string  name, string lname, string serial, string visa, const string & id);
	ForeignPassport(const Passport & p, string visa, const string & id);
	void Show() const;
};

Passport::Passport(string _name, string _lname, string _serial)
{
	name = _name;
	lname = _lname;
	serial = _serial;
}
void Passport::Show() const
{
	cout << "Ім'я: " << name << endl;
	cout << "Прізвище: " << lname << endl;
	cout << "Серійний номер: " << serial << endl;
}
ForeignPassport::ForeignPassport(string name, string lname, string serial, string _visa, const string & _id)
	:Passport(name, lname, serial)
{
	visa = _visa;
	id = _id;
}
ForeignPassport::ForeignPassport(const Passport & p, const string _visa, const string & _id)
	:Passport(p)
{
	visa = _visa;
	id = _id;
}
void ForeignPassport::Show() const
{
	Passport::Show();
	cout << "Номер зак. паспорта: "  << id << endl;
	cout << "Доступна віза: " << visa<< endl;
	cout << endl;
}