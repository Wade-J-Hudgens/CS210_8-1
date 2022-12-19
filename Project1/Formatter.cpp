#include <string>

using namespace std;

string formatNumberToTwoDigit(unsigned int number) {
	if (number < 10) {
		return "0" + to_string(number);
	}
	return to_string(number);
}

string nCharString(size_t n, char c) {
	string rv = "";
	string new_c(1, c);
	for (int i = 0; i < n; i++) {
		rv += new_c;
	}
	return rv;
}

string formatTime24(unsigned int h, unsigned int m, unsigned int s) {
	unsigned int new_h = h % 24;
	unsigned int new_m = m % 60;
	unsigned int new_s = s % 60;
	return formatNumberToTwoDigit(new_h) + ":" + formatNumberToTwoDigit(new_m) + ":" + formatNumberToTwoDigit(new_s);
}

string formatTime12(unsigned int h, unsigned int m, unsigned int s) {
	unsigned int new_h = h % 12;
	unsigned int new_m = m % 60;
	unsigned int new_s = s % 60;
	string rv = formatNumberToTwoDigit(new_h) + ":" + formatNumberToTwoDigit(new_m) + ":" + formatNumberToTwoDigit(new_s);
	if (new_h == h) rv += " A M";
	else rv += " P M";
	return rv;
}