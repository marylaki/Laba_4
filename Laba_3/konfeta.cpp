#include "stdafx.h"
#include "koditer.h"
#include "konfeta.h"
#include <iostream>

void Konfeta::setForma(string f)
{
	forma = f;
}

string Konfeta::getForma()
{
	std::cout << "����� �������: " << forma << std::endl;
	return forma;
}

Konfeta::Konfeta()
{
	
}

Konfeta::~Konfeta()
{
	
}

void Konfeta::Karamel::setMassa(int m)
{
	massa = m;
}

int Konfeta::Karamel::getMassa()
{
	std::cout << "Macca ��������: "<<massa<<" ��.\n";
	return massa;
}

Konfeta::Karamel::Karamel()
{
	
}

Konfeta::Karamel::~Karamel()
{
	
}
void Konfeta::set_Karamel(int m)
{
	k.setMassa(m);
}

int Konfeta::get_Karamel()
{
	return k.getMassa();
}

Konfeta Konfeta::Karamel::karam_konf()
{
	Konfeta konfet;
	konfet.setCost(11);
	konfet.setForma("�������");
	konfet.set_Karamel(50);
	cout << "\n������� ��������� �� ��������� ������\n";
	konfet.show();
	return konfet;
}

bool Konfeta::isKaramel()
{
	return (this->k.massa > 0);
}
void Konfeta::show()
{
	cout << "\n�������\n";
	this->getCost();
	this->getForma();
	this->get_Karamel();
	cout << endl;
}
void Konfeta::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
Konfeta::Konfeta(int c, string t, int m)
{
	this->setCost(c);
	this->setForma(t);
	this->set_Karamel(m);
}