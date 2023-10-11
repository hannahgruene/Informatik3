#pragma once

class Bruch
{
	/* kein Zugriff von aussen */
private:
	int zaehler;
	int nenner;

	/* oeffentliche Schnittstelle */
public:
	Bruch(int = 0);
	Bruch(int, int);
	~Bruch();

	/* Methoden */
	void print();

	/* Operatoren */
	const Bruch& operator = (const Bruch&);
	Bruch operator + (const Bruch&) const;
	Bruch operator - (const Bruch&) const;
	Bruch operator * (const Bruch&) const;
	Bruch operator / (const Bruch&) const;
	bool operator == (const Bruch&) const;
	bool operator != (const Bruch&) const;
	bool operator < (const Bruch&) const;
	bool operator <= (const Bruch&) const;
	bool operator > (const Bruch&) const;
	bool operator >= (const Bruch&) const;
};

