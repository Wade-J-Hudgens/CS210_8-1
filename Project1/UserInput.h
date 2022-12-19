#pragma once
void printMenu(std::string strings[], unsigned int numStrings, unsigned char width);
void displayClocks(unsigned int h, unsigned int m, unsigned int s);
void clearScreen();
unsigned int getMenuChoice(unsigned int maxChoice);
void handleUserInput(unsigned int input, unsigned int& h, unsigned int& m, unsigned int& s, bool& isRunning);