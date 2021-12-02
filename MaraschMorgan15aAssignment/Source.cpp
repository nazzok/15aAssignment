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

	//valid
	cout << "Test 1: A offset by 6\n";
	cout << character('A', 6) << endl;

	cout << "Test 2: z offset by -1\n";
	cout << character('z', -1) << endl;

	//invalid range
	cout << "Test 3: a offset by -1\n";
	cout << character('a', -1) << endl;

	//invalid character
	cout << "Test 4: ? offset by 2\n";
	cout << character('?', 2) << endl;

	return 0;
}

char character(char start, int offset) {
	char end = '0';
	try {
		if (isalpha(start)) { //if the initial character is a letter
			end = start + offset;
			if (isalpha(end)) { //if final character is a letter
			}
			else { //if final character isn't a letter
				throw false;
			}
		}
		else { //if initial character isn't a letter
			throw invalidCharacterException();
		}
		return end;
	}
	catch (invalidCharacterException) {
		cout << "invalidCharacterException";
	}
	catch (bool invalidRangeException) {
		cout << "invalidRangeException";
	}
}