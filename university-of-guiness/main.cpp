//
// Name
// Date
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    // Variable declarations
    double semesterBill;
    string name;
    string residentialStatus;
    string boarding;

    // Constants for tuition and board.
    const double inStateTuition = 3000;
    const double outOfStateTuition = 4500;
    const double inStateRoomBoard = 2500;
    const double outOfStateRoomBoard = 3500;

    // Get the users name.
    cout << "Enter your name." << endl;
	cout << "Then hit enter." << endl;
	getline(cin, name);

    // Get the user residential status.
    cout << "What is your residential status (i.e., in-state or out-of-state)" << endl;
	cout << "Then hit enter." << endl;
	cin >> residentialStatus;

    // Get the user room and board needs.
    cout << "Do you require room and board (Y or N)" << endl;
	cout << "Then hit enter." << endl;
	cin >> boarding;

    // Calculate the semesters bill .
    if (residentialStatus == "in-state")
        {
        if (boarding == "y" || boarding == "Y")
            semesterBill = inStateRoomBoard + inStateTuition;
        else
            semesterBill = inStateTuition;
        }
    else if (residentialStatus == "out-of-state")
        {
        if (boarding == "y" || boarding == "Y")
            semesterBill = outOfStateRoomBoard + outOfStateTuition;
        else
            semesterBill = outOfStateTuition;    
        }

    // Print an error for residential status. 
    else 
        cout << endl << "Your residential status did not register please enter in-state or out-of-state." << endl;

    // Print the bill
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << name << " your Bill for this semester is $" << semesterBill << endl;

    return 0;
}