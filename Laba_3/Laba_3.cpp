// Laba_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "koditer.h"
#include "konfeta.h"
#include "chocolate_konf.h"
#include "pechenie.h"
#include "dop_class1.h"
using namespace std;

class Printer
{
public:
	void IAmPrinting(Base* some)
	{
		std::cout << typeid(some).name() << endl;
		some->toConsole();
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus"); 

	Konfeta konf=Konfeta::Karamel::karam_konf();
	cout.setf(ios::boolalpha);
	cout << "Функция конфеты проверяющая наличие карамели (massa>0) = " << konf.isKaramel() << endl;

	cout << "\nСчетчик созданных объектов Birth_tort\n";
	Birth_tort t1;
	{
		Birth_tort t2, t3, t4;
		Birth_tort::getCounter();
	}
	Birth_tort::getCounter();

	cout << "\nВызов функции IKnowAllAoutYou дружcтвенного класса Inspector\n";
	Pechenie cookis(25, "Песочное");
	Inspector inspect;
	inspect.IkowAllAboutYou(cookis);
	cout << "\nВызов дружественной функции ICanModify\n";
	ICanModify(cookis);
	cookis.show();

	cout << "\nIamPrinting(Base*) для объкетов разных класов\n";
	Printer print;
	Konditer_Izdel *obj1 = new Konditer_Izdel(1);
	print.IAmPrinting(obj1);
	delete obj1;
	Konfeta *obj2 = new Konfeta(2, "Сфера", 15);
	print.IAmPrinting(obj2);
	delete obj2;
	Pechenie *obj3 = new Pechenie(3, "Сахарное");
	print.IAmPrinting(obj3);
	delete obj3;
	Chocolate_konfeta *obj4 = new Chocolate_konfeta(4, "Овал", 34, "Горький");
	print.IAmPrinting(obj4);
	delete obj4;
	
	cout << "*************cost_cast**************";
	const Pechenie  c_p(10,"Овсяное");
	ICanModify(*(const_cast <Pechenie*>(&c_p)));
	(const_cast <Pechenie*>(&c_p))->toConsole();

	cout << "*************dynamic_cast**************\n";
	Konditer_Izdel* t;
	Pechenie*p;
	Konfeta*k;
	cout << "\nПонижающее преобразование\ndynamic_cast<Pechenie*>(Konditer_Izdel*):\n" <<
		typeid(dynamic_cast<Pechenie*>(t)).name() << endl;//downcast B->P
	cout << "\nПовышающее преобразование\ndynamic_cast<Konditer_Izdel*>(Pechenie*):\n" <<
		typeid(dynamic_cast<Konditer_Izdel*>(p)).name() << endl;//upcast P->B
	cout << "\nПерекрестное преобразование\ndynamic_cast<Pechenie*>(Konfeta*):\n" << 
		typeid(dynamic_cast<Pechenie*>(k)).name() << endl;//crosscast P1->P2
	cout << "\ndynamic_cast<Konfeta*>(Pechenie*):\n" <<
		typeid(dynamic_cast<Konfeta*>(p)).name() << endl;

	cout << "\n*************static_cast**************\n";
	Konditer_Izdel* bc,cb(1);
	Konfeta* kc, ck(2,"Треугольная",4);
	cout<<"\nstatic_cast<Konditer_Izdel*>(&Konfeta):\n"<<
		typeid(static_cast<Konditer_Izdel*>(&ck)).name()<<endl;
	cout << "\nstatic_cast<Konfeta*>(&Konditer_Izdel):\n" << 
		typeid(static_cast<Konfeta*>(&cb)).name()<<endl;
	int i = 12;
	cout << i<<" "<<typeid(static_cast<double>(i)).name()<<endl;
	
	return 0;
}

