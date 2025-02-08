//
// Name Gar Powell
// Date 2/8/25
// Time Calculator Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Variable declarations
    double seconds;
    double minute;
    double hour;
    double day;

    // Constants for cost fro seconds in each amount of time.
    const double secondsMinute = 60;
    const double secondsHour = 3600;
    const double secondsDay = 86400;

    // Get the amount of seconds to convert.
    cout << "Enter how many seconds you would like to convert to days, hours or minutes." << endl;
	cout << "Then hit enter." << endl;
	cin >> seconds;

    // Calculate and print the number of days, hours or minutes in the given seconds.
    if (seconds >= secondsMinute)
    {
        minute = seconds / secondsMinute;
        cout << endl << "There are " << minute << " minute(s) in " << seconds << " seconds." << endl;
    }

    if (seconds >= secondsHour)
    {
        hour = seconds / secondsHour;
        cout << endl << "There are " << hour << " hour(s) in " << seconds << " seconds." << endl;
    }
    
    if (seconds >= secondsDay)
    {
        day = seconds / secondsDay;
        cout << endl << "There are " << day << " day(s) in " << seconds << " seconds." << endl;
    }
    return 0;
}