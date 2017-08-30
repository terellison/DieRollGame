//Terry Ellison
// August 30 2017 ©
// Chapter 5 Assignment

#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	// Seed the random number generator
	srand((unsigned int)time(NULL));

	int cnt1, cnt2, guess;

	// Prompt user for input
	cout << "Enter a whole number between 1 and 6:\n";
	cin >> guess;

	// Generate random number
	int DieRoll = rand() % 6 + 1;

	// Output user input and random number
	cout << "Guess" << "\t" << "Dice Roll result" << endl;
	cout << guess << "\t" << DieRoll << endl;

	// Display appropriate output based on conditions
	if (guess == DieRoll) {
		cout << "\nWINNER" << endl;
	}

	if ((DieRoll % 2) == 1) {
		cout << "\nDOUBLE WINNER" << endl;
	}

	if ((DieRoll + guess) >= 10 && (DieRoll % 2) == 0) {
		cout << "YOU ARE A LUCKY PERSON" << endl;
	}
	cout << "\n";

	// Prints the numbers 1 - 5
	for (int i = 0; i <= 5; i++) {
		cout << i << " ";
	}

	cout << "\n\n";

	/* Counts backwards from 100 and prints all the numbers evenly divisible by 17
	that are in between 100 and 0, inclusive */
	for (int n = 100; n >= 0; n--) {
		if ((n % 17) == 0) {
			cout << n << " ";
		}
		else
			continue;
	}
	cout << "\n\n";

	int f = 100;
	
	/* Counts backwards from 100 and prints all the numbers evenly divisible by 17
		that are in between 100 and 0, inclusive */
	while (f >= 0) {
		f--;
		if ((f % 17) == 0) {
			cout << f << " ";
		}
		else
			continue;
	}
	cout << "\n\n";

	// Takes user input and outputs the result of the user input modulo 5
	do {
		cout << "Enter a number (to stop entering numbers, enter 0):\n";
		cin >> guess;

		int result = guess % 5;
		cout << "\nThe result of " << guess << " modulo 5 is " << result << endl;

		cout << "\n";
	}
	while (guess > 0 || guess < 0);

	// Prints a table of the results of the inner loop counter times the outer loop counter
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= 6; b++) {
			cout << (a * b) << "\t";
		}
		cout << "\n";
	}

	cout << "\n";
	
	system("Pause");

    return 0;
}

