//Terry Ellison
// August 23 2017 ©
// Chapter 4 Assignment

#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int cnt1, cnt2, guess;

	cout << "Enter a whole number between 1 and 6:\n";
	cin >> guess;

	int DieRoll = rand() % 6 + 1;

	cout << "Guess" << "\t" << "Dice Roll result" << endl;
	cout << guess << "\t" << DieRoll << endl;

	if (guess == DieRoll) {
		cout << "\nWINNER" << endl;
	}

	if ((DieRoll % 2) == 1) {
		cout << "\nDOUBLE WINNER" << endl;
	}

	if ((DieRoll + guess) >= 10 && (DieRoll % 2) == 0) {
		cout << "YOU ARE A LUCKY PERSON" << endl;
	}

	system("Pause");

    return 0;
}

