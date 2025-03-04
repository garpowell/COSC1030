//
// Name Gar Powell
// Date 3/3/25
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);

int main ()
{
    // Variable declarations
    double wholesaleCost = 0;
    double markupPercentage = 0;
    double markupCost = 0;

    // Getting the wholesale cost and check for reasonableness.
    cout << endl << "Enter the wholesale cost of your item." << endl;
    cin >> wholesaleCost;
    while (wholesaleCost < 0 )
    {
        cout << endl << "Please enter a wholesale cost greater than 0." << endl;
        cin >> wholesaleCost;  
    }

    // Getting the percent markup and check for reasonableness.
    cout << endl << "What is the percent markup." << endl;
    cin >> markupPercentage;
    while (markupPercentage < 0 )
    {
        cout << endl << "Please enter a markup percent greater than 0." << endl;
        cin >> markupPercentage;  
    }

    // Call the function to make the calculation
    markupCost = calculateRetail(wholesaleCost, markupPercentage);

    // Print the retail price.
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << "The markup cost is $" << markupCost << "." << endl;

    return 0;
}

// Function to calculate the markup price and print it. 
double calculateRetail(double cost, double percent)
{
    double retailPrice = cost * percent/100 + cost; 
    return retailPrice;
}
    
