//
// Name Gar Powell
// Date 2/20/25
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Variable declarations
    int numberOfPennies = 0;
    int numberOfNickels = 0;
    int numberOfDimes = 0;
    int numberOfQuarters = 0;
    double totalvalue = 0;
    double totalFromPennies = 0;
    double totalFromNickels = 0;
    double totalFromDimes = 0;
    double totalFromQuarters = 0;

    // Constants declarations.
    const double pennie = 0.01;
    const double nickel = 0.05;
    const double dime = 0.10;
    const double quarter = 0.25;

    // Getting the input for the game.
   
    cout << endl << "Welcome to the change counting game." << endl;
    cout << "The goal is to make exactly one dollar by entering" << endl;
    cout << " a number of pennies, nickels, dimes, and quarters." << endl;
    cout << "Enter the number of coins you want of each coin when prompted for a total of one dollar." << endl;

     // Get the number of each coin and calculate the amount from each coin.
     cout << "Enter the number of pennies you would like." << endl;
     cout << "Then hit enter" << endl;
     cin >> numberOfPennies;
     totalFromPennies = numberOfPennies * pennie;

     cout << "Enter the number of nickels you would like." << endl;
     cout << "Then hit enter" << endl;
     cin >> numberOfNickels;
     totalFromNickels = numberOfNickels * nickel;
     
     cout << "Enter the number of dimes you would like." << endl;
     cout << "Then hit enter" << endl;
     cin >> numberOfDimes;
     totalFromDimes = numberOfDimes * dime;

     cout << "Enter the number of quarters you would like." << endl;
     cout << "Then hit enter" << endl;
     cin >> numberOfQuarters;
     totalFromQuarters = numberOfQuarters * quarter;

    // Calculate the total.
     totalvalue = totalFromPennies + totalFromNickels + totalFromDimes + totalFromQuarters;

     // If statements to print out the results.
    if (totalvalue == 1)
        cout << endl << "congratulations! You won the game!"<< endl;

    else if (totalvalue < 1)
    {
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << endl << "You lost! Your total was $"<< totalvalue << endl;
        cout << "That is less than a dollar."<< endl;
    }
    else
    {
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << endl << "You lost! Your total was $"<< totalvalue << endl;
        cout << "That is more than a dollar."<< endl;
    }
    return 0;
}

