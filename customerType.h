// Christopher Serrano
//Header file for customerType object. Hold customers and their information

#include <iostream>
#include <string>

#pragma once

using namespace std;

class customerType {

//Unique attribues of a customer
private:
	string name;
	string accNum;

//Methods to alter values
public:
	void showDetails();

	void setName(string n);
	void setAccNum(string a);

	void rentVideo();
	void returnVideo();

	void printAccNum();
};
