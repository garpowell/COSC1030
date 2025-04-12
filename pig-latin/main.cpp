//
// Name Gar Powell
// Date 4/10/25
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void pigLatin(char *);

int main()
{
    // Initialize variables.
    const int SIZE = 80;
    char line[SIZE];
    
    // Get the string you want to convert.
    cout << "Enter the phrase you would like to convert to pig latin in all upper case.\n";
    cout << "No more than " << (SIZE - 1) << " characters.\n";
    cin.getline(line, SIZE);

    // Call the function to print the string backward.
    pigLatin(line);

    return 0;
}

// Function to reorder and print the string.
void pigLatin(char *line)
{
    
    int count = 1;
    int endIndex;
    int firstLetter = 0;
    char letter;
    endIndex = strlen(line) -1;
    // Print the string backward
    for (count = 1; count <= endIndex;)
    {
        letter = line[count];
        if (isspace(letter))
            {
                cout << line[firstLetter];
                cout << "AY ";

                firstLetter = count + 1;
                count = count + 2;
            }
        else
            {
                cout << line[count];
                count = count + 1;
            }
    }
    cout << line[firstLetter];
    cout << "AY" << endl;   
}