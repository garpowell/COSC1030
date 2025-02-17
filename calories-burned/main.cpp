//
// Name Gar Powell
// Date 2/17/25
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    // Variable declarations
    double caloriesBurned;
    int minutes;

    // Constants declarations.
    const double calPerMin = 3.6;

    // For loop to calculate the calories burned.
    for (minutes = 5; minutes <= 30; minutes +=5)
    {
        caloriesBurned = minutes * calPerMin;
        cout << endl << "You have been going for "<< minutes 
        << " minutes and have burned " << caloriesBurned << " calories so far."<< endl;
    }

    return 0;
}