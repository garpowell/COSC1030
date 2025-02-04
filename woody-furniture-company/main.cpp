//
// Name Gar Powell
// Date 2/4/25
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Variable declarations
    int AmericanColonial;
    int Modern;
    int FrenchClassical;
    int allChairs;
    double totalAmericanColonial;
    double totalModern;
    double totalFrenchClassical;
    double totalAll;

    // Constants for cost of each chair.
    const int costAmericanColonial = 85.00;
    const int costModern = 57.50;
    const int costFrenchClassical = 127.75;

    // Get the amount of each chair sold.
    cout << "Enter amount of American Colonial chairs sold." << endl;
	cout << "Then hit enter." << endl;
	cin >> AmericanColonial;

    cout << "Enter amount of Modern chairs sold." << endl;
	cout << "Then hit enter." << endl;
	cin >> Modern;

    cout << "Enter amount of French Classical chairs sold." << endl;
	cout << "Then hit enter." << endl;
	cin >> FrenchClassical;

    // Calculate the total amount from each style of chair sold.
    totalAmericanColonial = AmericanColonial * costAmericanColonial;
    totalModern = Modern * costModern;
    totalFrenchClassical = FrenchClassical * costFrenchClassical;

    // Calculate the total chairs sold and amount from total chairs sold.
    allChairs = AmericanColonial + Modern + FrenchClassical;
    totalAll = totalAmericanColonial + totalModern + totalFrenchClassical;

    // Print information about the seats sold and income generated.
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << "You sold " << AmericanColonial << " American Colonial chairs and made $" << totalAmericanColonial << endl
        << "You sold " << Modern << " Modern chairs and made $" << totalModern << endl 
		<< "You sold " << FrenchClassical << " French Classical chairs and made $" << totalFrenchClassical << endl 
        << "You sold " << allChairs << " total seats and made $" << totalAll << endl;

    return 0;
}
