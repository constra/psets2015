/*
 * FILE
 * Copyright © constra
 * Email: sun.mai@outlook.com
 */

#include <iostream>
using namespace std;

int
main( int argc, char *argv[] )
{
    int x = 5;
    int *p = &x;

    cout << "x is declared by int x\n";
    cout << "the content of x is called by x\n";
    cout << "the value is: " << x << endl;

    cout << "the address of x is called by &x\n";
    cout << "the value is: " << &x << endl;
    cout << endl;
    
    cout << "p is a pointer declared by int *p = &x\n";
    cout << "the content of p is called by p\n";
    cout << "the value is (memory address of x): " << p << endl;
    cout << "the content of p (x) is called by *p\n";
    cout << "the value is: " << *p << endl;
    cout << "the memory address of p is:" << &p << endl;
	return 0;
}
