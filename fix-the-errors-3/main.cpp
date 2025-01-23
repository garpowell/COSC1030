//
// Name Gar Powell
// Date 1/18/25
// Fix the Errors #3 Programming Project
// COSC 1030
//

// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

#include <iostream>
using namespace std;
	

int main()
{

	float firstNumber;
	float secondNumber;
	// float secondNew;
	// 3float firstNew;
	
	// Prompt user to enter the first number.
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number.
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		<< " and " << secondNumber << endl;

	// Now we will swap the values.
	// The original code just swapped the first numbers and then swapped the second to the first so they were the same.
	// I tried to solve this with new variables but could not get it to work.
	// firstNumber = secondNew; secondNumber = firstNew;

	// Output the values.
	// I finaly just switch the values here.
	cout << "After swapping, the values of the two numbers are "
		<< secondNumber << " and " << firstNumber << endl; return 0;
}
