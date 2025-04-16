//
// Name Gar Powell
// Date 4/9/25
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void sortLine(char *);

int main()
{
    // Initialize variables.
    const int SIZE = 80;
    char line[SIZE];
    
    // Get the string you want to convert.
    cout << "Enter a word or phrase you would like to see backward.\n";
    cout << "No more than " << (SIZE - 1) << " characters.\n";
    cin.getline(line, SIZE);

    // Call the function to print the string backward.
    sortLine(line);
    return 0;
}

// Function to reorder and print the string.
void sortLine(char *line)
{
    int count = 0;
    int endIndex;
    endIndex = strlen(line) -1;
    // Print the string backward
    for (count = endIndex; count >= 0; count--)
        cout << line[count];
    cout << endl;   
}