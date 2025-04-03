//
// Name Gar Powell
// Date 4/2/25
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream>
#include <memory>
#include <iomanip>
using namespace std;

// Function prototype
double totalFunction(double *, int);
double aveFunction(double *, int);

int main()
{
    double *sales = nullptr;
    double total = 0.0;
    double average;
    int numSales;
    int count;

    // Get the number of sales.
    cout << "How many sales amounts do you have to process?";
    cin >> numSales;

    // Dynamically allocate an array for sales.
    sales = new double[numSales];

    // Enter sales data.
    cout << "Enter all your " << numSales << " sales data seprated by a space: ";
    for (count = 0; count < numSales; count++)
        cin >> sales[count];

    // Print the array.
    cout << "Here are the sales numbers you entered:\n";
    for (count = 0; count < numSales; count++)
        cout << sales[count] << " ";
    cout << endl;

    total = totalFunction(sales, numSales);
    cout << "Here is the total sales numbers:\n";
    cout << total << endl;

    average = aveFunction(sales, numSales);
    cout << "Here is the average sales numbers:\n";
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << average << endl;
    
    return 0;
}

double totalFunction(double *sales, int numSales)
{
    int index = 0;
    double sum = 0;
       
    for (index = 0;  index < numSales; index++)
        sum = sum + sales[index];

    return sum;
}

double aveFunction(double *sales, int numSales)
{
    {
        int index = 0;
        double sum = 0;
        double ave = 0; 
           
        for (index = 0;  index < numSales; index++)
            sum = sum + sales[index];
        
        ave = sum / numSales;

        return ave;
    }
}