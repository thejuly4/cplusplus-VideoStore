//Christopher Serrano
//Header file for videoType object. can be considered a movie

#pragma once
#include <iostream>
#include <string>

using namespace std;

//Overload the << symbol for ease of printing in the program
class videoType {
	friend ostream &operator<<(ostream &output, const videoType &);

//Create private attributes unique for each movie
private:
	string title;
	string actors;
	string producer;
	string director;
	string prodCompany;
	int    copies;

//Create constructors and methods to alter and print attributes
public:
	videoType();
	videoType(string t, string a, string p, string d, string c, int num);

	void setTitle(string t);
	void setActors(string a);
	void setProducer(string p);
	void setDirector(string d);
	void setCompany(string c);
	void setCopies(int n);

	void showDetails();
	void showCopies();

	string getTitle();

	void checkOut();
	void checkIn();
	void checkStatus();
};
