#include "stdafx.h"
#include "dop_class1.h"
#include <iostream>
int Birth_tort::Counter = 0;
int tort::getdiametr()
{ 
	cout << "�������: " << diametr<<endl;
	return diametr;
}

void tort::setnachinka(string n)
{ 
	nachinka = n; 
}

void tort::setdiam(int d)
{
	this->setCost(1);
	diametr = d;
}

void tort::show()
{ 
	cout << "\n����\n";
	this->getCost();
	this->getTip();
	this->getnach();
	this->getdiametr();
	cout << endl;
}

tort::tort(int c, string tip, int diam, string nach)
{
	this->setCost(c);
	this->setTip(tip);
	this->setdiam(diam);
	this->setnachinka(nach);
}

void tort::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
/*********************************************************/
string tort::getnach()
{ 
	cout << "������� :" << nachinka << endl;
	return nachinka; 
}

void Birth_tort::setstandart()
{
	diametr = Birth_tort::diam;
}
string Birth_tort::canGetnach()
{ 
	return getnach(); 
}
Birth_tort::Birth_tort()
{
	Counter++;
}
Birth_tort::~Birth_tort()
{
	Counter--;
}
int Birth_tort::getCounter()
{
	cout << "�������� ������ Birth_tort " << Counter<<"��.\n";
	return Counter;
}

void Birth_tort::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}

Birth_tort::Birth_tort(int c, string nach)
{
	this->setCost(c);
	this->setTip("�������");
	this->setnachinka(nach);
}
/***********************************************************/

