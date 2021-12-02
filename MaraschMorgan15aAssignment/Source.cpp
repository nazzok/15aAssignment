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

int main() {
	//send valid characters
	//send non-letter as start
	//sned out of range
}

char character(char start, int offset) {
	char end;
	try {
		if (isalpha(start)) { //if the initial character is a letter
			end = start + offset;
			if (isalpha(end)) { //if final character is a letter
			}
			else { //if final character isn't a letter
				char invalidRangeException = end;
				throw invalidRangeException;
			}
		}
		else { //if initial character isn't a letter
			char invalidCharacterException = start;
			throw invalidCharacterException;
		}
		return end;
	}
	catch (char invalidCharacterException) {
		cout << invalidCharacterException << " is not a letter A-Z or a-z";
	}
	catch (char invalidRangeException) {
		cout << "the result, " << invalidRangeException << ", is not a letter A-Z or a-z";
	}
}