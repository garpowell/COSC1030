//
// Name Gar Powell
// Date 3/21/25
// Temperatures
// COSC 1030
//

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

// Functions
void getTemperatures(double[], int);
double averageTemperature(double[], int);
int maxTemperature(double[], int);
int minTemperature(double[], int);

int main()
{
    // Variable declarations
    int SIZE = 0; 
    double temperatureAverage = 0;
    int maxIndex = 0;
    int minIndex = 0;

    // Get the number of temperatures to be entered.
    cout << "How many temperatures do you have to enter?\n";
    cin >> SIZE;
    while (SIZE > 50)
        {
            cout << "The maxumum number of temperatures can not be more that 50. \n";
            cout << "Please enter a number 50 or less. \n";
            cin >> SIZE;
        }

    // Declare the array type.
    typedef double tempArray[SIZE];

    // Initialize the array for temperatures.
    tempArray temperatures;

    // Call the functions.
    getTemperatures(temperatures, SIZE);
    temperatureAverage = averageTemperature(temperatures, SIZE);
    maxIndex = maxTemperature(temperatures, SIZE);
    minIndex = minTemperature(temperatures, SIZE);

    // Print the average, max and nin temperatures.
    cout << "The maximum temperature was "<< temperatures[maxIndex] << "."<< endl;
    cout << "The mimimum temperature was " << temperatures[minIndex] << "."<< endl;

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "The average temperature was " << temperatureAverage << "." << endl;

    return 0;
}

// Function to get the temperatures.
void getTemperatures(double temperature[], int SIZE)
{
    cout << "Enter the amount of sales for each type of salsa sold for the past month.\n";
    for (int index = 0; index < SIZE; index++)
    {
     // Get the temperatures.
     cout << "Enter the " << (index + 1) << " temperature\n";
     cin >> temperature[index];
    }

}

// Average temperatures function.
double averageTemperature(double temperatures[], int SIZE)
{
    double total_temperatures = 0;
    double average_temperatures = 0;
    for (int index = 0; index < SIZE; index++)
        total_temperatures = total_temperatures + temperatures[index];
    
    average_temperatures = total_temperatures/SIZE;

    return average_temperatures;
}

// Max temperature function.
int maxTemperature(double temperatures[], int SIZE)
{
    int max_index = 0;
    for (int index = 1; index < SIZE; index++)
        if (temperatures[max_index] < temperatures[index])
            max_index = index;

    return max_index;
}

// Min temperature function.
int minTemperature(double temperatures[], int SIZE)
{
    int min_index = 0;
    for (int index = 1; index < SIZE; index++)
        if (temperatures[min_index] > temperatures[index])
            min_index = index;

    return min_index;
}
   


