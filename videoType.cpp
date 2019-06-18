//Christopher Serrano
//Initialization of methods and constructors for the video object

#pragma once
#include <iostream>
#include <string>
#include "videoType.h"

using namespace std;

//Default constructor
videoType::videoType()
{
	title = "Super Smash Bros";
	actors = "Melee and Smash 4";
	producer = "Bill Trinen";
	director = "Sakurai";
	prodCompany = "Nintendo";
	copies = 5;
}

//Overloaded constructor
videoType::videoType(string t, string a, string p, string d, string c, int num)
{
	title = t;
	actors = a;
	producer = p;
	director = d;
	prodCompany = c;
	copies = num;
}

//According to their names, the following methods alter a value
void videoType::setTitle(string t)
{
	title = t;
}

void videoType::setActors(string a)
{
	actors = a;
}

void videoType::setProducer(string p)
{
	producer = p;
}

void videoType::setDirector(string d)
{
	director = d;
}

void videoType::setCompany(string c)
{
	prodCompany = c;
}

void videoType::setCopies(int n)
{
	copies = n;
}

//Prints all the attributes if called
void videoType::showDetails()
{
	cout << "Title: " + title << endl
		<< "Actors: " + actors << endl
		<< "Producer: " + producer << endl
		<< "Director: " + director << endl
		<< "Production Company: " + prodCompany << endl
		<< "Number of copies left in store: " << copies << endl;
}

void videoType::showCopies()
{
	cout << "Number of copies left in store: " << copies << endl;
}

string videoType::getTitle()
{
	return title;
}

//Makes sure there is copies then decrements the value
void videoType::checkOut()
{
	if (copies > 0) {
		copies--;
	}
}

//Check if a video is available for renting
void videoType::checkStatus()
{
	if (copies > 0) {
		cout << title + " is available for renting" << endl;
	}
	else {
		cout << title + " is not available for renting at the moment" << endl;
	}
}

//Overload operator for ease of output
ostream & operator<<(ostream &output, const videoType &ex)
{
	output << "Title: " + ex.title << endl
		<< "Actors: " + ex.actors << endl
		<< "Producer: " + ex.producer << endl
		<< "Director: " + ex.director << endl
		<< "Production Company: " + ex.prodCompany << endl
		<< "Number of copies left in store: " << ex.copies << endl;

	return output;
}
