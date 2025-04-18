//
// Name Gar Powell
// Date 4/16/25
// String Length Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
int countChar(char *);

int main()
{
    
    // Initialize variables.
    const int SIZE = 80;
    char line[SIZE];
    int number_characters = 0;
    
    // Get the string you want to convert.
    cout << "Enter a phrase you would like to see the number of characters\n";
    cout << "No more than " << (SIZE - 1) << " characters.\n";
    cin.getline(line, SIZE);

    // Call the function to count the characters.
    number_characters = countChar(line);

    cout << "There are " << number_characters << " characters in your phrase.\n";

    return 0;
}

// Function to count the characters.
int countChar(char *line)
{
    int count = 0;
    
    // Print the string backward
    while (line[count] != '\0')
            count++;
    return count;
}