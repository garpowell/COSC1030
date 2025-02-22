//
// Name Gar Powell
// Date 2/21/25
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    // Variable declarations
    int daysWorked = 0;
    double exponent = 0;
    double totalPay = 0;
    double dailyPay = 0;
    int count = 0;

    // Constants declarations.
    const double base = 2;
    const double penniesInDollar = 100;

    // Getting the input for the game.
   
    cout << endl << "Your job pays one penny the first day and two pennies  " << endl;
    cout << "the second day, and continues to double each day." << endl;

    // Get the number of days worked.
    cout << endl << "Enter the number of days you have worked so we can calculate your pay." << endl;
    cout << "Then hit enter" << endl;
    cin >> daysWorked;

    // If statements to print out the results.
    while (daysWorked < 1)
        {
        cout << endl << "Please enter a value greater than one"<< endl;
        cin >> daysWorked;
        }

    for (count = 1; count <= daysWorked; count ++)
        {
        // Calculate the total and daily pay
        exponent = count - 1;
        dailyPay = pow(base, exponent)/penniesInDollar;
        totalPay = totalPay + dailyPay;

        // Print daily pay list.
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << "You made $" << dailyPay << " on day " << count << "." << endl;  
        }

    // Print the pay amount. 
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << "You made $" << totalPay << " for working " << daysWorked << " days." << endl;

    return 0;
}


