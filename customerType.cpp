// Christopher Serrano
//Object to be instantiated to represent a customer

#include <iostream>
#include <string>
#include "customerType.h"

#pragma once

using namespace std;

//Set values with new value when called
void customerType::setName(string n)
{
	name = n;
}

void customerType::setAccNum(string a)
{
	accNum = a;
}

//Print account number of the person
void customerType::printAccNum()
{
	cout << name << "'s account number is: " << accNum << endl;
}
