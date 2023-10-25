// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyString.h"


using namespace std;


int main()
{
    MyString a;
    MyString b = "Test";
    MyString c;

    cout << "a:<" << a << ">, b:<" << b << ">, c:<" << c << ">" << endl;

    c = a;

    cout << "a:<" << a << ">, b:<" << b << ">, c:<" << c << ">" << endl;

    a += b;
    c = b;

    cout << "a:<" << a << ">, b:<" << b << ">, c:<" << c << ">" << endl;

    c = b + "fall";

    cout << "a:<" << a << ">, b:<" << b << ">, c:<" << c << ">" << endl;

    return(0);
}
