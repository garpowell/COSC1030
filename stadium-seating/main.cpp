
//
// Name Gar Powell
// Date 2/3/25
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Variable declarations
    int classASeats;
    int classBSeats;
    int classCSeats;
    int allSeats;
    double totalClassA;
    double totalClassB;
    double totalClassC;
    double totalAll;

    // Constants for each seat price
    const int costClassA = 15;
    const int costClassB = 12;
    const int costClassC = 9;

    // Get the amount of each class of seat sold.
    cout << "Enter the amount of class A seats sold" << endl;
	cout << "Then hit enter" << endl;
	cin >> classASeats;

    cout << "Enter the amount of class B seats sold" << endl;
	cout << "Then hit enter" << endl;
	cin >> classBSeats;

    cout << "Enter the amount of class C seats sold" << endl;
	cout << "Then hit enter" << endl;
	cin >> classCSeats;

    // Calculate the total amount from each class of seat sold.
    totalClassA = classASeats * costClassA;
    totalClassB = classBSeats * costClassB;
    totalClassC = classCSeats * costClassC;

    // Calculate the total amount from all seats sold.
    allSeats = classASeats + classBSeats + classCSeats;
    totalAll = totalClassA + totalClassB + totalClassC;

    // Print information about the seats sold and income generated.
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << "You sold " << classASeats << " class A seats and made $" << totalClassA << endl
        << "You sold " << classBSeats << " class B seats and made $" << totalClassB << endl 
		<< "You sold " << classCSeats << " class C seats and made $" << totalClassC << endl 
        << "You sold " << allSeats << " total seats and made $" << totalAll << endl;

    return 0;
}