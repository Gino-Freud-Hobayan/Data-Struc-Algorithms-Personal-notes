// Activity 3 - string

// Create a C++ program that uses string functions to manipulate and process student information.

/*

Title: Student Information String Processor
Objective
Create a C++ program that uses string functions to manipulate and process student information.

Problem Statement
Create a program that asks the user to input the following:

First Name
Last Name
Course
The program must:

Copy the first name into another variable using strcpy()
Concatenate the first name and last name using strcat()
Display the complete name
Display the total number of characters in the complete name using strlen()
Sample Output
Enter First Name: Juan

Enter Last Name: Dela Cruz

Enter Course: BSCS

 

Complete Name: Juan Dela Cruz

Course: BSCS

Length of Complete Name: 15

Requirements
Use #include <cstring>
Use character arrays (char)
Apply:
strcpy()
strcat()
strlen()


*/


#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
    char first_name [40];
    char last_name [40];
    char student_course [40];
    
    char firstname_copy [40];
    char lastname_copy [40];
    
    char complete_name [80];
    
    
    cout << "Enter First Name: ";
    cin.getline(first_name, 40);
    
    cout << "Enter Last Name: ";
    cin.getline(last_name, 40);
    
    cout << "Enter Course: ";
    cin.getline(student_course, 40);
    
    
    
    strcpy(complete_name, first_name);
    
    strcat(complete_name, " ");
    strcat(complete_name, last_name);
    
    
    // len
    int my_namelength = strlen(complete_name);
    
    
    //Output
    
    cout << endl;
    
    cout << "Complete Name: " << complete_name;
    cout << endl;
    
    cout << "Course: " << student_course;
    cout << endl;
    
    cout << "Length of complete name: " << my_namelength;
    
    return 0;
    
}





