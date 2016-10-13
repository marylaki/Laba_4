#include "stdafx.h"
#include "koditer.h"
#include <iostream>

void Konditer_Izdel::setCost(int c)
{
	cost = c;
}

int Konditer_Izdel::getCost()
{
	std::cout << "Цена " << cost<<" коп.\n";
	return cost;

}

Konditer_Izdel::Konditer_Izdel()
{
}

Konditer_Izdel::~Konditer_Izdel()
{
	
}

void Konditer_Izdel::show()
{
	std::cout << "\nКондитерское изделие\n";
	this->getCost();
	std::cout << std::endl;
}

void Konditer_Izdel::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}

Konditer_Izdel::Konditer_Izdel(int c)
{
	this->setCost(c);
}