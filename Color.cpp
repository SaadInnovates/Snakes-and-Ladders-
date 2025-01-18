#include<iostream>
#include<Windows.h>
using namespace std;
#include "Color.h"

void setColor(int a)
{
	cout << "\033[" << a << "m";
}