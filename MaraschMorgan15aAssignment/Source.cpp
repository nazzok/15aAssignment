/*
Morgan Marasch
12/2/2021
CIS 1202.501

Assignment 15a:
Calculate character offsets
*/
#include <iostream>
using namespace std;

char character(char, int);

class invalidCharacterException
	{};
class invalidRangeException
	{};

int main() {
	try {
		cout << "Test 1: A offset by 6\n";
		cout << character('A', 6);
	}
	catch (invalidCharacterException) {
		cout << "invalidCharacterException";
	}
	catch (invalidRangeException) {
		cout << "invalidRangeException";
	}

	try {
		cout << "\nTest 2: z offset by -1\n";
		cout << character('z', -1) << endl;
	}
	catch (invalidCharacterException) {
		cout << "invalidCharacterException";
	}
	catch (invalidRangeException) {
		cout << "invalidRangeException";
	}

	try {
		cout << "\nTest 3: a offset by -1\n";
		cout << character('a', -1) << endl;
	}
	catch (invalidCharacterException) {
		cout << "invalidCharacterException";
	}
	catch (invalidRangeException) {
		cout << "invalidRangeException";
	}

	try {
		cout << "\nTest 4: ? offset by 2\n";
		cout << character('?', 2) << endl;
	}
	catch (invalidCharacterException) {
		cout << "invalidCharacterException";
	}
	catch (invalidRangeException) {
		cout << "invalidRangeException";
	}

	return 0;
}

char character(char start, int offset) {
	char end = '0';
	if (isalpha(start)) { //if the initial character is a letter
		end = start + offset;
		if (isalpha(end)) { //if final character is a letter
		}
		else { //if final character isn't a letter
			throw invalidRangeException();
		}
	}
	else { //if initial character isn't a letter
		throw invalidCharacterException();
	}
	return end;

}