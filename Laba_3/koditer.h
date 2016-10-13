#pragma once
#include "base.h"

class Konditer_Izdel: virtual public Base
{
	int cost;
	
public:
	
	void setCost(int);
	int getCost();
	Konditer_Izdel();
	Konditer_Izdel(int);
	~Konditer_Izdel();
	 void show();
	 void toConsole();
};




