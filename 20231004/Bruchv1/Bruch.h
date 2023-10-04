#pragma once

class Bruch
{
	/* kein Zugriff von aussen */
private:
	int zaehler;
	int nenner;

	/* oeffentliche Schnittstelle, Konstruktoren */
public: 
//Konstruktoren (Haben den Namen der Klasse! IMMER!)
//Konstrutoren haben keinen Rückgabewert!
	Bruch(); //Initialisiere mit nichts (Default Konstruktor)
	Bruch(int); //Initialisieren mit einer Zahl 
	Bruch(int, int); // Initialisieren mit zähler und nenner

	~Bruch();

	/* oeffentliche Schnittstelle, Methoden*/
public:
	void print();
};

