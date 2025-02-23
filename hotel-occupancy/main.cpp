//
// Name Gar Powell
// Date 2/22/25
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    // Variable declarations
    int totalFloors = 0;
    int roomsPerFloor = 0;
    double totalRooms = 0;
    int occupiedRoomsPerFloor = 0;
    int totalUnoccupiedRooms = 0;
    double totalOccupiedRooms = 0;
    double percentOccupied = 0;
    int count = 0;

    // Constants declarations.
    const double decimalToPercent = 100;

    // Getting the number of floors.
    cout << endl << "Enter the number of floors you have at your hotel." << endl;
    cout << "Then hit enter" << endl;
    cin >> totalFloors;

    // If statements to print out the results.
    while (totalFloors < 1)
        {
        cout << endl << "Please enter a number of floors greater than one."<< endl;
        cin >> totalFloors;
        }

    // Get the input for each floor.
    for (count = 1; count <= totalFloors; count ++)
    {
        if (count == 13)
            { count = 14;}
            
        cout << endl << "Please enter a number of rooms for the "<< count << " floor."<< endl;
        cin >> roomsPerFloor;

        while (roomsPerFloor < 10)
        {
        cout << endl << "Please enter a number of rooms for the "<< count << " floor that is ten or more."<< endl;
        cin >> roomsPerFloor;
        }

        cout << endl << "Please enter a number of occupied rooms for the "<< count << " floor."<< endl;
        cin >> occupiedRoomsPerFloor;

        while (roomsPerFloor < occupiedRoomsPerFloor)
        {
            cout << endl << "Please enter a number of occupied rooms less than the number of rooms for "<< count << " floor."<< endl;
            cin >> occupiedRoomsPerFloor;
        }
        
        // Calculate the total rooms and total occupied.
        totalRooms = totalRooms + roomsPerFloor;
        totalOccupiedRooms = totalOccupiedRooms + occupiedRoomsPerFloor;
    }

    // Calculate the total unoccupied precents.
    totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;
    percentOccupied = (totalOccupiedRooms / totalRooms * decimalToPercent);

    // Print the pay amount. 
    cout << endl << "You reported " << totalRooms << " rooms." << endl;
    cout << endl << "You reported " << totalOccupiedRooms << " occupied rooms." << endl;
    cout << endl << "Which gives " << totalUnoccupiedRooms << " unoccupied rooms." << endl;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << endl << "This gets you " << percentOccupied << " precent of rooms occupied." << endl;

    return 0;
}



