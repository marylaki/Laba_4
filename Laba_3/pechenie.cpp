#include "stdafx.h"
#include "pechenie.h"
#include <iostream>

void Pechenie::setTip(string t)
{
	tip = t;
}

string Pechenie::getTip()
{
	std::cout << "Тип печенья: "<<tip<<std::endl;
	return tip;
}

Pechenie::Pechenie()
{
	
}

Pechenie::~Pechenie()
{
	
}
void Pechenie::show()
{
	cout << "\nПеченье\n";
	this->getCost();
	this->getTip();
	cout << endl;
}

void Inspector::IkowAllAboutYou(Pechenie& cookis)
{
	cout << "\nInspector-Печенье\n";
	cookis.getCost();
	cout << "Тип: " << cookis.tip << endl;
	cout << endl;
}

void ICanModify(Pechenie& cookis)
{
	cookis.setCost(22);
	cookis.tip="Modify";
}

void Pechenie::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
Pechenie::Pechenie(int k, string s)
{
	this->setCost(k);
	this->setTip(s);
}
