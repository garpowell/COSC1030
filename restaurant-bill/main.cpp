//
// Name Gar Powell
// Date 1/24/25
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    // Variable declarations
    float restaurantBill;
    float taxAmount;
    float tipAmount;
    float totalBill;

    // Constants for the tax rate and tip percentage
    const double tax_rate = 0.0675;
    const double tip_percentage = 0.20;

    // Get the amount of the purchase.
    cout << "Enter the cost of the meal" << endl;
	cout << "Then hit enter" << endl;
	cin >> restaurantBill;

    // Calculate the sales tax.
    taxAmount = restaurantBill * tax_rate;

    // Calculate the tip.
    tipAmount = restaurantBill * tip_percentage;

    // Calculate the total of the sale.
    totalBill = restaurantBill + tipAmount + taxAmount;

    // Print information about the sale.
    cout << endl << "For a restaurant bill of $" << restaurantBill << endl
        << "The tax is $" << taxAmount << endl 
		<< "The tip is $" << tipAmount << endl
        << "The total is $" << totalBill << endl;

    return 0;
}