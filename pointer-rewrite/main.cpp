//
// Name Gar Powell
// Date 4/1/25
// Pointer Rewrite Programming Project
// COSC 1030
//

# include<iostream>
using namespace std;

// Function prototype
int doSomething(int *, int *);

// Main function
int main()
{
    int x = 8, y = 5;

    cout << "Before calling the function doSomething:\n"
        << " x = " << x << endl
        << " y = " << y << endl << endl;

    cout << "The function doSomething returns "
        << doSomething(&x, &y) << endl << endl;

    cout << "After calling the function doSomething:\n"
        << " x = " << x << endl
        << " y = " << y << endl << endl;

    return 0;
}
// Function
int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}