/*

Title: Username and Password Validator
Objective
Develop a C++ program that compares strings using strcmp().

Problem Statement
Create a login validation program with the following default credentials:

Username: admin

Password: 12345

The program should:

Ask the user to input a username and password
Compare the entered values using strcmp()
Display:
“Access Granted” if both are correct
“Invalid Username or Password” otherwise
Sample Output 1
Enter Username: admin

Enter Password: 12345

 

Access Granted

Sample Output 2
Enter Username: user

Enter Password: 1111

 

Invalid Username or Password

Requirements
Use strcmp()
Use character arrays (char)
Use if-else statements


*/


#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char validusername[] = "admin";
    char validpassword[] = "12345";
    
    char username [40];
    char password [40];

    cout << "Enter username: ";
    cin >> username;
    
    cout << "Enter password: ";
    cin >> password;
    
    
    // Compare values using strcmp()
    
    // strcmp returns 0 if the strings are identical
    if (strcmp(username, validusername) == 0 && strcmp(password, validpassword) == 0) 
    {
        cout << "Access Granted" << endl;
    } 
    
    else 
    {
        cout << "Invalid Username or Password" << endl;
    }
    
    
    
    
    
}





