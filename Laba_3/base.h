#pragma once
class Base//������ ��������� ������ ������������ ������
{
public:
	Base(){}
	virtual ~Base(){}
	virtual void  show() = 0;
	virtual void toConsole() = 0;
};
