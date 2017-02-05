#pragma once
#include<math.h>
class Equation
{
public:
	Equation() {};
	Equation(double a, double b, double c) :a_(a), b_(b), c_(c) {};
	Equation(double a, double b) :a_(a), b_(b) {};

	~Equation() {};
	virtual void equation() = 0;
	virtual void showRes() = 0;
protected:
	double a_, b_, c_;
	
};

class Lineal:public Equation
{
public:

	Lineal(double a, double b) :Equation(a, b) {};
	~Lineal() {};
	virtual void equation() override {
		res_ =  ((0 - b_) / a_);
		cout << res_ << endl;
	}
	virtual void showRes() override {
		cout << res_;
	}

private:
	double res_;
};

class Kvadrat :public Equation
{
public:
	Kvadrat(double a, double b, double c) :Equation(a, b, c) {};
	~Kvadrat() {};
	virtual void equation() override {
		double res = 0;
		double D = (b_*b_) - 4 * a_*c_;
		if (D > 0) {
			D = sqrt(D);
			res_ = new double[2];
			cnt = 2;
			res_[0] = ((-1 * b_) + D) / (2 * a_);
			res_[1] = ((-1 * b_) - D) / (2 * a_);
		}
		else if(D==0){
			res_ = new double((-1 * (b_ / (2 * a_))));
			cnt = 1;
		}
		else {
			res_ = nullptr;
			cnt = 0;
			return;
		}
	}
	virtual void showRes() override {
		if (cnt == 0) {
			cout << "розв'язків немає\n";
		}
		else {
			for (int i = 0; i < cnt; i++)
				cout << res_[i] << endl;
		}
	}
private:
	double *res_;
	int cnt;
};
