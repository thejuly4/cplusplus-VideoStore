//Christopher Serrano
//Header file for VideoStore (main program file)

#pragma once
#include <iostream>
#include <string>
#include "videoType.h"
#include "customerType.h"

using namespace std;
//Create linked lists
	list<videoType> videoList;
	list<videoType>::iterator vtr;

	list<customerType> customerList;
	list<customerType>::iterator ctr;

//Declare methods to be implemented in cpp file
	void displayMenu();

	void createVideoList();

	void createCustomerList();