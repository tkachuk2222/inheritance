#pragma once
class Shape
{
public:
	Shape();
	~Shape();
	virtual void show() = 0;
	virtual void save() = 0;
	virtual void load() = 0;

private:

};

class Square :public Shape {

};