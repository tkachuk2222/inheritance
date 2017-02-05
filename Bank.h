#pragma once
using namespace std;

class BankAccount
{
protected:
	string name_;
	int number_;
	double balance_;
public:
	BankAccount(string, int, double);
//	~BankAccount();
	void addDeposit(double);
	bool takeMoney(double);
protected:
	void takeMoney2(double);
	void show();
};
BankAccount::BankAccount(string name, int num = 0, double bal = 0){
	name_ = name;
	number_ = num;
	balance_ = bal;
}

void BankAccount::addDeposit(double d) {
	balance_ += d;
}
bool BankAccount::takeMoney(double d) {
	if ((balance_ - d) <= 0)
		return false;
	balance_ -= d;
	return true;
}
void BankAccount::takeMoney2(double d) {
	balance_ -= d;
}

void BankAccount::show() {
	cout << "Name: " << name_ << endl;
	cout << "Account Number: " << number_ << endl;
	cout << "Balance: " << balance_ << endl;
}
class Overdraft	:	BankAccount
{
private:
	int percent_;
public:
	Overdraft(string, int, double , double);
	Overdraft(BankAccount, double);
//	~Overdraft();
	bool takeMoney(double d);
	void setPercent(double newP) { percent_ = (newP); };
	void pay(unsigned int p) { balance_ += p; }
	void show();
};
Overdraft::Overdraft(string name, int num = 0, double bal = 0, double per=0.1) 
	:BankAccount(name,num,bal){
	percent_ = per;
}
Overdraft::Overdraft(BankAccount ba, double per=0.1)
	: BankAccount(ba)
{
	percent_ = per;
}

bool Overdraft::takeMoney(double d) {
	
	if ((balance_ - d) < (-500)) {
		cout << "false takenig" << endl;
		return false;
	}
	cout << "taked money" << d << endl;
	balance_ -= d;
	if (balance_ < 0)
		balance_ = (balance_*percent_)/100 + balance_;
	return true;
	
}
void Overdraft::show() {
	BankAccount::show();
	cout << "Percent: " << (percent_) << "%" << endl;
}
//винен\невинен