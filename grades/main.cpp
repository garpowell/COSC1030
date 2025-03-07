//
// Name Gar Powell
// Date 3/5/25
// Grades Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

using namespace std;

double averageGrades(double &, int &);

int main ()
{
    // Variable declarations
    double grade = 0;
    int numberOfGrades = 0;
    double average = 0;
    double gradeTotal = 0;

    // Getting the number of grades.
    cout << endl << "Enter the number of grades you have to calculate." << endl;
    cin >> numberOfGrades ;
    
    // Get the grades and total them.
    for (int count = 1; count <= numberOfGrades; count++)
    {
        cout << endl << "Please enter your " << count << " grade" << endl;
        cin >> grade;  

        gradeTotal = gradeTotal + grade;
    }

    // Call the function to make the calculation
    average = averageGrades(gradeTotal, numberOfGrades);

    // Print the grade
    if (average >= 90)
        cout << endl << "Your garde is a A!" << endl;

    else if (average < 90 && average >= 80)
        cout << endl << "Your garde is a B!" << endl;

    else if (average < 80 && average >= 70)
        cout << endl << "Your garde is a C!" << endl;

    else if (average < 70 && average >= 60)
        cout << endl << "Your garde is a D!" << endl;

    else 
        cout << endl << "Your garde is a F!" << endl;

    return 0;
}

// Function to calculate the average of the grades. 
double averageGrades(double &total, int &grades)
{
    double gradeAverage = total / grades; 
    return gradeAverage;
}
    
