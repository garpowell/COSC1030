//
// Name Gar Powell
// Date 1/27/25
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    // Variable declarations
    float ocean5years;
    float ocean7years;
    float ocean10years;
    
    // Constants for the ocean's level is currently rising at about 1.5 millimeters per year.
    const double ocean_rising = 1.5;
    
    // Calculate height in 5 years.
    ocean5years = ocean_rising * 5;

    // Calculate height in 5 years.
    ocean7years = ocean_rising * 7;

    // Calculate height in 5 years.
    ocean10years = ocean_rising * 10;

    // Print the heights of the ocean.
    cout << endl << "In 5 years the ocean will be " << ocean5years << " millimeters higher than the current level."<< endl
        << "In 7 years the ocean will be " << ocean7years << " millimeters higher than the current level."<< endl
		<< "In 10 years the ocean will be " << ocean10years << " millimeters higher than the current level."<< endl;

    return 0;
}
