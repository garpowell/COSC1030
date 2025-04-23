//
// Name Gar Powell
// Date 4/15/25
// Dental Bill Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

// Function prototype
double cost(double &, double &);
float cost(double &, double &, float &);

int main()
{
    
    // Initialize variables.
    char member;
    double service = 0;
    double testFees = 0;
    float medicine = 0;
    double bill = 0;
    
    // See if user is a member or not.
    cout << "Are you a member of the dental plan? (Y or N) \n";
    cin >> member;
    member = toupper(member);
     
    // Call the function based on membership
   if (member == 'Y')
        bill = cost(service, testFees);
    else if (member == 'N')
        bill = cost(service, testFees, medicine);
    else
    {
        cout << "Incorrect input we can not figure your bill. Sorry. Try again." << endl;
        return 0;
    } 

    // Print the bill.
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "The bill for the procedure is $" << bill << endl;

    return 0;
}
// Calculate member cost
double cost(double &service, double &testFees)
{
    cout << "What is the service charge for this procedure? \n";
    cin >> service;

    cout << "What are the test fees for this procedure? \n";
    cin >> testFees;

    return (service + testFees);
}
// Calculate nonmember cost
float cost(double &service, double &testFees, float &medicine)
{
    cout << "What is the service charge for this procedure? \n";
    cin >> service;

    cout << "What are the test fees for this procedure? \n";
    cin >> testFees;

    cout << "What is the medicine cost for this procedure? \n";
    cin >> medicine;

    return (service + testFees + medicine);
}
