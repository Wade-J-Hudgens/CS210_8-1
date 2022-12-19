#include <string>
#include <iostream>
#include <array>
#include "Formatter.h"

using namespace std;

void printMenu(string strings[], unsigned int numStrings, unsigned char width) {
	cout << nCharString(width, '*') << endl;
	string begin_line = "* ";
	string end_line = "*";
	for (int i = 0; i < numStrings; i++) {
		string number = to_string(i+1) + " - ";
		cout << begin_line << number << strings[i] << nCharString(width - begin_line.length() - end_line.length() - number.length() - strings[i].length(), ' ') << end_line << endl;
	}
	cout << nCharString(width, '*') << endl;
}

unsigned int getMenuChoice(unsigned int maxChoice) {
	unsigned int userChoice = NULL;
	while (userChoice == NULL) {
		cout << "Please enter a number between {1} and {" << maxChoice << "}: ";
		cin >> userChoice;
		userChoice = userChoice > maxChoice ? NULL : userChoice;
		if (userChoice == NULL) {
			cout << endl << "INVALID CHOICE" << endl;
		}
	}
	return userChoice;
}
void displayClocks(unsigned int h, unsigned int m, unsigned int s) {
	cout << nCharString(26, '*') << nCharString(4, ' ') << nCharString(26, '*') << endl;
	cout << "*" << nCharString(6, ' ') << "12-Hour Clock" << nCharString(5, ' ') << "*" << nCharString(4, ' ');
	cout << "*" << nCharString(6, ' ') << "24-Hour Clock" << nCharString(5, ' ') << "*" << endl;
	cout << "*" << nCharString(6, ' ') << formatTime12(h, m, s) << nCharString(6, ' ') << "*" << nCharString(4, ' ');
	cout << "*" << nCharString(8, ' ') << formatTime24(h, m, s) << nCharString(8, ' ') << "*" << endl;
	cout << nCharString(26, '*') << nCharString(4, ' ') << nCharString(26, '*') << endl;
}

void clearScreen() {
	system("cls");
	system("clear");
}

void handleUserInput(unsigned int input, unsigned int& h, unsigned int& m, unsigned int& s, bool& isRunning) {
	switch (input) {
		case 1:
			h++;
			break;
		case 2:
			m++;
			break;
		case 3:
			s++;
			break;
		case 4:
			isRunning = false;
	}
}