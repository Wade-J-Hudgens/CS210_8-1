/*
	Wade Hudgens
*/

#include <iostream>
#include "UserInput.h";

int main()
{
	std::string strings[4] = { 
		"Add One Hour", 
		"Add One Minute",
		"Add One Second",
		"Exit Program"
	};
	bool isRunning = true;
	
	unsigned int h = 0;
	unsigned int m = 0;
	unsigned int s = 0;
	while (isRunning) {
		clearScreen();
		displayClocks(h,m,s);
		printMenu(strings, 4, 30);
		unsigned int userChoice = getMenuChoice(4);
		handleUserInput(
			userChoice,
			h,
			m,
			s,
			isRunning
		);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
