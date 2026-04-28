#include <iostream>        // c++ Computing for the Factorial using RECURSIVE FUNCTION
using namespace std;       // Gino Freud D. Hobayan

// Recursive function to calculate factorial
long long getFactorial(int n) 
{
    // Factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive call --->>  n! = n * (n-1)!
    return n * getFactorial(n - 1);
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a number: ";
        
        // IF STATEMNT = Check if the input is a valid integer
        if (!(cin >> num) ) 
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear(); 
            while (cin.get() != '\n');   // Clear the buffer
        } 
        
        else if (num < 0) 
        {
            // positive integers only
            cout << "Please input positive integers only!" << endl;
        } 
        
        else 
        {
            //  RECURSION
            cout << "Factorial of " << num << " is " << getFactorial(num) << "." << endl;
        }

        //  try again - choice
        cout << "Try again? [y/n]: ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y');

    cout << "The end!" << endl;

    return 0;
}
