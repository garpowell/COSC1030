//
// Name Gar Powell
// Date 3/17/25
// Chips and Salsa Programming Project
// COSC 1030
//

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// Functions
void salsaSales(string[], int[], int);
int totalJars(int[], int);
int maxSalsa(int[], int);
int minSalsa(int[], int);

int main()
{
    // Variable declarations
    const int SIZE = 5; 
    int totalSales = 0;
    int maxIndex = 0;
    int minIndex = 0;

    // Initialize the array for salsa types and sales.
    string salsa[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sales[SIZE];

    // Call the functions.
    salsaSales(salsa, sales, SIZE);
    totalSales = totalJars(sales, SIZE);
    maxIndex = maxSalsa(sales, SIZE);
    minIndex = minSalsa(sales, SIZE);

    // Print the results to the console.
    cout << "The salsa sold: \n";
    cout << "  Salsa:        Jars Sold: " << endl;
    for (int count = 0; count < SIZE; count++)
        cout << setw(6) << salsa[count] << setw(15) << sales[count] << endl;

    cout << "The total salsa sold was " << totalSales << " jars." << endl;
    cout << "The most salsa sold was " << salsa[maxIndex] << " with "<< sales[maxIndex] << " jars sold."<< endl;
    cout << "The least salsa sold was " << salsa[minIndex] << " with "<< sales[minIndex] << " jars sold."<< endl;

    return 0;

}

// Function to get salsa jars sold.
void salsaSales(string salsa[], int sales[], int SIZE)
{
    cout << "Enter the amount of sales for each type of salsa sold for the past month.\n";
    for (int index = 0; index < SIZE; index++)
    {
     // Get the jar of salsa sold.
     cout << " Enter the jars sold for " << salsa[index] << " salsa.\n";
     cin >> sales[index];

     // Checking for a valid entry.
     while (sales[index] < 0)
     {
         cout << " Enter a value 0 or greater for jars sold for " << salsa[index] << " salsa.\n";
         cin >> sales[index];
     }
    }

}

// Total sales function.
int totalJars(int sales[], int SIZE)
{
    int jars = 0;
    for (int index = 0; index < SIZE; index++)
        jars = jars + sales[index];
      
    return jars;
}

// Max sales function.
int maxSalsa(int sales[], int SIZE)
{
    int max_index = 0;
    for (int index = 1; index < SIZE; index++)
        if (sales[max_index] < sales[index])
            max_index = index;

    return max_index;
}

// Min sales function.
int minSalsa(int sales[], int SIZE)
{
    int min_index = 0;
    for (int index = 1; index < SIZE; index++)
        if (sales[min_index] > sales[index])
            min_index = index;

    return min_index;
}
   


