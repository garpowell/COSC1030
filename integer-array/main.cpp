//
// Name Gar Powell
// Date 3/31/25
// Integer Array
// COSC 1030
//

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

// Function prototype
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);
double meanCalculation(int[], int);
void fillArray(int[], int);
void printArray(int[], int);
void swap(int &, int &);


int main()
{
    // Variable declarations
    int serchNumber = 0; // Enter the number you want to search for.
    int SIZE; // size of the array
    int binaryIndex = 0;
    double arrayMean = 0;
    

    // Integer array.
    int integerArray[] = {0};
    
    // Get the size of the array.                        
    cout << "Enter the number of elements in the array.\n";
    cin >> SIZE;

    while (SIZE > 50 )
    {
        cout << "Enter the number of elements in the array less than 50.\n";
        cin >> SIZE;
    }
    
    // Get the elements in the array.
    fillArray(integerArray, SIZE);

    // Print array elements.
    cout << "Here are the numbers you entered.\n";
    printArray(integerArray, SIZE);

    // Sort the array.
    bubbleSort(integerArray, SIZE);

    // Print array elements sorted.
    cout << "Here are the numbers you entered sorted.\n";
    printArray(integerArray, SIZE);

    // Calculate the mean of the data set.
    arrayMean = meanCalculation(integerArray, SIZE);

    // Print the mean of the data.
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "The mean for the data set is:  "<< arrayMean << endl;

    // Get the number to search for.                        
    cout << "Enter a number you want to search for.\n";
    cin >> serchNumber;

    // Search the array for a given number.
    binaryIndex = binarySearch(integerArray, SIZE, serchNumber);
    
    // Print if the number is in the data or not.
    if (binaryIndex == -1)
        cout << serchNumber << " is not in the array of " << SIZE << " elements." << endl;
    else 
        cout << "The number you are looking for is "<< binaryIndex + 1 
        << " in the array of " << SIZE << " elements." << endl;

    return 0;
}  

// Function to get the elements in the array.
void fillArray(int array[], int size)
{
    int index = 0;

    for (index = 0; index <= size - 1; index++)
    {
        cout << "Enter your data "
            << (index +1) << ": ";
        cin >> array[index];
    }
}

// Put the elements in the array in order.
void bubbleSort(int array[], int size)
{
    int maxElement = 0;
    int index = 0;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
                swap(array[index], array[index + 1]);
        }

    }
}

// Function to print the elements in the array.
void printArray(int array[], int size)
{
    int count = 0;

    cout << "{ ";
    for (count = 0; count < size; count++)
        cout << array[count] << ", ";  
    cout << "}" <<endl;
}

// Function to calculate the mean of the array
double meanCalculation(int array[], int size)
{
    double mean = 0;
    double total = 0;
    int index = 0;

    for (index = 0; index <= size - 1; index++)
        total = total + array[index];

    mean = total / size;

    return mean;
}

// Binary search function for the number. Returns the index for the number of comparisons.  
int binarySearch(const int array[], int numElems, int value)
{
    int first = 0;
    int last = numElems - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last)/2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
      
    }
    return position;
}

void swap(int &a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}