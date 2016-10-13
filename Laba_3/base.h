#pragma once
class Base//нельзя создавать обекты абстрактного класса
{
public:
	Base(){}
	virtual ~Base(){}
	virtual void  show() = 0;
	virtual void toConsole() = 0;
};
