// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Bruch.h"


using namespace std;


int main()
{
	Bruch a;
	Bruch b = 10;
	Bruch c(1, 3);

	a.print();
	b.print();
	c.print();

	if (c < b)
	{
		a = c + b;
	}

	a.print();
	b.print();
	c.print();

	return(0);
}