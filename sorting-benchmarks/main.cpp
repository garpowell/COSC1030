//
// Name Gar Powell
// Date 4/18/25
// Sorting Benchmarks Programming Project
// COSC 1030
//


#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void swap(char &, char &);
int bubbleSort(char *);
int selectionSort(char *);

int main()
{
    
    // Initialize variables.
    const int SIZE = 80;
    char line[SIZE];
    char lineCopy[SIZE];
    int exchangeBubble = 0;
    int exchangeSelection = 0;
    
    // Get the string you want to sort.
    cout << "Enter a phrase you would like to have sorted.\n";
    cout << "No more than " << (SIZE - 1) << " characters.\n";
    cin.getline(line, SIZE);

    // Make a copy of the phrase.
    strcpy(lineCopy, line);

    // Call the function to sort elements in the array in order.
    exchangeSelection = selectionSort(line);
    exchangeBubble = bubbleSort(lineCopy);

    cout << "The Bubble sort took " << exchangeBubble << " exchanges to sort the phrase.\n";
    cout << "The Selection sort took " << exchangeSelection << " exchanges to sort the phrase.\n";

    cout << line << endl;
    cout << lineCopy << endl;

    return 0;
}

// Bubble sort function to put the elements in the array in order.
int bubbleSort(char *lineCopy)
{
    int maxElement = 0;
    int index = 0;
    int size = strlen(lineCopy);
    int total = 0;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (lineCopy[index] > lineCopy[index + 1])
                swap(lineCopy[index], lineCopy[index + 1]);
            total = total + 1;
        }
    }
    return total;
}

// Select sort function to put elements in the array in order.
int selectionSort(char *line)
{
    int minIndex;
    char minValue;
    int size = strlen(line);
    int count = 0;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = line[start];
        for (int index = start + 1; index < size; index++)
        {
            if (line[index] < minValue)
            {
                minValue = line[index];
                minIndex = index;
            }
        }
        swap(line[minIndex], line[start]);
        count = count + 1;
    }
return count;
}

// Function to swap characters.
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}