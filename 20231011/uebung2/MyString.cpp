#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyString.h"


//Konstruktor
MyString::MyString(){

    len = 0;
    text = (char*)"";

};

// Copy Konstruktor
MyString::MyString(char* content){
    
    int contentlen = strlen(content) +1;
    text = new char[contentlen];

    strcpy(text, content);
};

const MyString& MyString::Copy(const MyString& b){
    return (*this = b);
}

// Destruktor
MyString::~MyString(){
    delete []text;
}

// Methoden
void MyString::print(){
    printf("%s\n", text);
};

int MyString::length(){
    return len;
}

// Konstruktoren und Zuweisungsoperatoren
const MyString& MyString::operator = (const MyString& b){
	/* Zuweisung an sich selbst? */
	if (this == &b)
	{
		return (*this);
	}
    int contentlen = strlen(b.text) +1;
    text = new char[contentlen];

    strcpy(text, b.text);

    len = strlen(text);

    return (*this);
}

