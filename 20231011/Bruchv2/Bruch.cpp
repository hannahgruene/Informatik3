#include <stdio.h>
#include <stdlib.h>
#include "Bruch.h"


using namespace std;


/* Konstruktoren */

Bruch::Bruch(int i)
{
	/* initialisiere mit i 1-tel */
	zaehler = i;
	nenner = 1;
}


Bruch::Bruch(int z, int n)
{
	if (n == 0)
	{
		fprintf(stderr,"Fehler: Nenner 0\n");
		exit(1);
	}

	/* Nenner muss immer positiv sein */
	if (n < 0)
	{
		zaehler = -z;
		nenner = -n;
	}
	else
	{
		zaehler = z;
		nenner = n;
	}
}


/* Destruktor */

Bruch::~Bruch()
{
	/* keine Aktion notwendig */
}


/* Methoden */

void Bruch::print()
{
	printf("Zaehler: %d\nNenner: %d\n", zaehler, nenner);
}


/* Klassen Operatoren */

const Bruch& Bruch::operator = (const Bruch& b)
{
	/* Zuweisung an sich selbst? */
	if (this == &b)
	{
		return (*this);
	}

	zaehler = b.zaehler;
	nenner = b.nenner;

	return (*this);
}


Bruch Bruch::operator + (const Bruch& b) const
{
	int neuZaehler, neuNenner;

	neuZaehler = (zaehler * b.nenner) + (b.zaehler * nenner);
	neuNenner = nenner * b.nenner;

	return(Bruch(neuZaehler, neuNenner));
}


Bruch Bruch::operator - (const Bruch& b) const
{
	/* kuerzen sparen wir uns */
	return(Bruch((zaehler * b.nenner) - (b.zaehler * nenner), nenner * b.nenner));
}


Bruch Bruch::operator * (const Bruch& b) const
{
	/* kuerzen sparen wir uns */
	return(Bruch(zaehler * b.zaehler, nenner * b.nenner));
}


Bruch Bruch::operator / (const Bruch& b) const
{
	if (b.zaehler == 0)
	{
		fprintf(stderr, "Fehler: Division durch 0\n");
		exit(1);
	}
	/* kuerzen sparen wir uns */
	return(Bruch(zaehler * b.nenner, nenner * b.zaehler));
}


bool Bruch::operator == (const Bruch& b) const
{
	return(zaehler * b.nenner == b.zaehler * nenner);
}


bool Bruch::operator != (const Bruch& b) const
{
	return(zaehler * b.nenner != b.zaehler * nenner);
}


bool Bruch::operator < (const Bruch& b) const
{
	return(zaehler * b.nenner < b.zaehler* nenner);
}


bool Bruch::operator <= (const Bruch& b) const
{
	return(zaehler * b.nenner <= b.zaehler * nenner);
}


bool Bruch::operator > (const Bruch& b) const
{
	return(zaehler * b.nenner > b.zaehler * nenner);
}


bool Bruch::operator >= (const Bruch& b) const
{
	return(zaehler * b.nenner >= b.zaehler * nenner);
}

