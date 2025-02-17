//
// Name Gar Powell
// Date 2/17/25
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    // Variable declarations
    int favoriteBeverage = 0;
    int totalCoffee = 0;
    int totalTea = 0;
    int totalCoke = 0;
    int totalOrangeJuice = 0;

    // Constants declarations.
    const int sentinel = -1;

    // While loop for the survey.
    while (favoriteBeverage != sentinel)
    {
        cout << endl << "For the survey on favorite beverage please enter the number next to your choice of beverage." << endl
        << "1. Coffee" << endl
        << "2. Tea" << endl
        << "3. Coke" << endl
        << "4. Orange Juice" << endl
        << "If you are the last participant please enter -1 after you have recorded your choice."  << endl;
        cin >> favoriteBeverage;

            // If statments to calculate the number of each choice.
            if (favoriteBeverage == 1)
            totalCoffee = totalCoffee + 1;
    
            else if (favoriteBeverage == 2)
                totalTea = totalTea + 1;
    
            else if (favoriteBeverage == 3)
                totalCoke = totalCoke + 1;
            
            else if (favoriteBeverage == 4)
                totalOrangeJuice = totalOrangeJuice + 1;
            // Sending a warning is something other than 1-4 is chosen.
            else
                cout << endl << "Your answer does not make sense please enter a number from 1-4 or -1 to end." << endl;
    }
    
    // Output the results of the survey to the console.
    cout << endl << "The results of the survey are."<< endl
    << " There were " << totalCoffee << " people that chose coffee." << endl
    << " There were " << totalTea << " people that chose tea." << endl
    << " There were " << totalCoke << " people that chose coke." << endl
    << " There were " << totalOrangeJuice << " people that chose orange juice." <<endl;

    return 0;
}
