//Christopher Serrano
//Main file that the program starts with

#include <iostream>
#include <fstream>
#include <list>
#include "VideoStore.h"

using namespace std;

int main() {

	int choice = 0;
	createVideoList();
	

	while (choice != (-1)) {
		displayMenu();
		cin >> choice;

		if (choice == 1) {
			string check = "no";
			string wantedTitle;

			cout << "Please enter the title of the wanted video: ";
			cin >> wantedTitle;
			cout << endl;
			
			for (vtr = videoList.begin(); vtr != videoList.end(); ++vtr){
				if ((*vtr).getTitle() == wantedTitle) {
					check = "yes";
					cout << wantedTitle << " was found within our database! Yay!" << endl << endl;
				}
			}
			if (check == "no") {
				cout << wantedTitle << " was not found within our database. Sorry." << endl << endl;
			}
		}
		if (choice == 2) {
			cout << "Not implemented yet, please try another option" << endl << endl;
		}
		if (choice == 3) {
			cout << "Not implemented yet, please try another option" << endl << endl;
		}
		if (choice == 4) {
			string check = "no";
			string wantedTitle;

			cout << "Please enter the title of the wanted video: ";
			cin >> wantedTitle;
			cout << endl;

			for (vtr = videoList.begin(); vtr != videoList.end(); ++vtr) {
				if ( (*vtr).getTitle() == wantedTitle) {
					check = "yes";
					(*vtr).checkStatus();
				}
			}
			
		}
		if (choice == 5) {
			cout << "Titles of all videos currently owned: " << endl << endl;
			for (vtr = videoList.begin(); vtr != videoList.end(); ++vtr) cout << (*vtr).getTitle() << " " << endl;
			cout << endl;
		}
		if (choice == 6) {
			for (vtr = videoList.begin(); vtr != videoList.end(); ++vtr) cout << (*vtr) << " " << endl << endl;
		}
		if (choice == 9) {
			return 0;
		}

	}//end of while loop 

	//End of program
	return 0;
	
}//end of main

//Displays text menu to user for input
void displayMenu() {
	cout << "Please select one of the following: " << endl
		<< "1: To check whether the store carries a particular video" << endl
		<< "2: To check out a video" << endl
		<< "3: To check in a video" << endl
		<< "4: To check whether a particular video is in stock" << endl
		<< "5: To print only the titles of all the videos" << endl
		<< "6: To print a list of all the videos" << endl
		<< "9: To exit" << endl;
}

//Create a video list from text file
void createVideoList(){
	ifstream input;
	string line;
	int counter=1;

	videoType temp;
	string t;
	string a;
	string p;
	string d;
	string pc;
	int    c;

	input.open("videoDat.txt");

	if (input.fail()) {
		cout << "Error opening text file for video input" << endl;
		exit(0);
	}

	while ( getline(input , line) ) {
		if (counter == 1) {
			temp.setTitle(line);
		}
		if (counter == 2) {
			a = line;
		}
		if (counter == 3) {
			a = a + " and " + line;
			temp.setActors(a);
		}
		if (counter == 4) {
			temp.setProducer(line);
		}
		if (counter == 5) {
			temp.setDirector(line);
		}
		if (counter == 6) {
			temp.setCompany(line);
		}
		if (counter == 7) {
			temp.setCopies(atoi(line.c_str()));

			videoList.push_back(temp);
			counter = 0;
		}
		counter++;
	}

}//end of createVideoList
