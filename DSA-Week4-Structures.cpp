/*

Title: Student Record Management System Using Structures in C++
Based on the uploaded lesson about Structures, Array of Structures, and Nested Structures in C++

Objective
At the end of this laboratory activity, the students should be able to:
Create and use structures in C++
Use arrays inside structures
Use array of structures
Apply loops in inputting and displaying records
Access structure members using the dot (.) operator
Use functions with structures

Problem Statement
Create a Student Record Management System using C++ structures.
The program should:
Ask the user to enter information for 5 students:
Student ID
Full Name
Course
Midterm Grade
Final Grade

Compute the Average Grade:
Average = (Midterm + Final) / 2
Display:
Complete student information
Computed average
Remarks:
PASSED → average >= 75
FAILED → average < 75
Use:
Structure
Array of structure
Loop
Function for displaying records

Program Requirements
Structure Members
studentID
fullname
course
midterm
finalgrade
average

Sample Output
========== STUDENT RECORD SYSTEM ==========

Enter Record for Student #1
Student ID: 2025-001
Full Name: Juan Dela Cruz
Course: BSIT
Midterm Grade: 85
Final Grade: 90

Enter Record for Student #2
Student ID: 2025-002
Full Name: Maria Santos
Course: BSCS
Midterm Grade: 70
Final Grade: 72

========== STUDENT RECORDS ==========

ID: 2025-001
Name: Juan Dela Cruz
Course: BSIT
Average: 87.5
Remarks: PASSED

ID: 2025-002
Name: Maria Santos
Course: BSCS
Average: 71
Remarks: FAILED


*/


#include <iostream>
#include <cstring>
using namespace std;

struct Student_structure {
    char studentID[20];
    char fullname[50];
    char course[20];
    float midterm;
    float finalgrade;
    float average;
};




// function for displaying student records

// I used int size to determine the number of students in the array, which is 5 in this case.
void display_student_records(Student_structure students[], int size) 
{
    cout << "\n========== STUDENT RECORDS ==========" << endl;
    
    for (int i = 0; i < size; i++) 
    {
        cout << "ID: " << students[i].studentID << endl;
        cout << "Name: " << students[i].fullname << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "Average: " << students[i].average << endl;
        
        if (students[i].average >= 75) 
        {
            cout << "Remarks: PASSED" << endl;
        } 
        
        else 
        {
            cout << "Remarks: FAILED" << endl;
        }
        
        cout << endl;
    }
}


int main()
{
    Student_structure students[5];

    //  student record - inputs
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter Record for Student #" << i + 1 << endl;    // 1, 2, 3, 4, 5
        cout << "Student ID: ";
        cin.getline(students[i].studentID, 20);

        cout << "Full Name: ";
        cin.getline(students[i].fullname, 50);
        
        cout << "Course: ";
        cin.getline(students[i].course, 20);
        
        cout << "Midterm Grade: ";
        cin >> students[i].midterm;
        
        cout << "Final Grade: ";
        cin >> students[i].finalgrade;

        cin.ignore(); 


        // average = midterm + finals / 2
        students[i].average = (students[i].midterm + students[i].finalgrade) / 2;
    }



    // call the function
    display_student_records(students, 5);


}




