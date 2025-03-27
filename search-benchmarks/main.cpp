//
// Name Gar Powell
// Date 3/24/25
// Search Benchmarks Programming Project
// COSC 1030
//

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

// Function prototype
int linearSearch(const int[], int, int);
bool primeSearch(const int[], int, int);
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);
int main()
{
    // Variable declarations
    int serchNumber = 0; // Enter the number you want to search for.
    const int SIZE = 25;
    int linerComparisons = 0;
    int binaryComparisons = 0;
    bool notFound = false;
    // Primes between 1-100.
    int integerArray[SIZE] = {13, 17, 19, 71, 73, 79, 83, 89, 
                            23, 29, 2, 3, 5, 7, 11, 41, 43,
                            31, 37, 47, 53, 59, 61, 97, 67};
    
    // Get the number to search for.                        
    cout << "Enter a number between 1 and 100 to see if it is prime.\n";
    cin >> serchNumber;

    // Search the array for a given number.
    bubbleSort(integerArray, SIZE);
    linerComparisons = linearSearch(integerArray, SIZE, serchNumber);
    notFound = primeSearch(integerArray, SIZE, serchNumber);
    binaryComparisons = binarySearch(integerArray, SIZE, serchNumber);

    if (notFound == false)
        {
            cout << serchNumber << " is not prime."<< endl;
            cout << "The linear search took "<< linerComparisons << " comparisons."<< endl;
            cout << "The binary search took "<< binaryComparisons << " comparisons."<< endl;
        }
    else 
        {
            cout << serchNumber << " is prime."<< endl;
            cout << "The linear search took "<< linerComparisons << " comparisons."<< endl;
            cout << "The binary search took "<< binaryComparisons << " comparisons."<< endl;
        }

    return 0;
}  
    
int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return index;
}

bool primeSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return found;
}

int binarySearch(const int array[], int numElems, int value)
{
    int first = 0;
    int last = numElems - 1;
    int middle = 0;
    int position = -1;
    bool found = false;
    int count = 0;

    while (!found && first <= last)
    {
        middle =(first + last)/2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
        
        count++;
    }
    return count;
}

void bubbleSort(int array[], int size)
{
    int maxElement = 0;
    int index = 0;

    for (maxElement = size -1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }

    }
}