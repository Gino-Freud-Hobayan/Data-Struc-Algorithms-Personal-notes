// Create a C++ program that uses a two-dimensional array to store and process the grades of students in multiple subjects.


/* 

Combine the 1 dimensional and 2 dimensional arrays


Develop a program that will:

1. Ask the user to enter the number of students (maximum 5)

2. Ask the user to enter the number of subjects (maximum 4)

3. Accept the following inputs:
Student Name (string)
Subject Grades (integer)

4. Store:
Student names in a one-dimensional string array
Grades in a two-dimensional integer array


5. Process and display:
Each student’s grades
Total grade per student
Average grade per student
Highest average student







Example Input:

Enter number of students: 3
Enter number of subjects: 3

Student 1 Name: Anna
Math: 90
Science: 85
English: 88



Student 2 Name: John
Math: 78
Science: 82
English: 80



Expected Output:

Name     Grades         Total   Average
Anna     90 85 88       263     87.67
John     78 82 80       240     80.00

Top Student: Anna




2D array = 

1D array = 


*/




#include <iostream>
#include <iomanip>
#include <string>

using namespace std;







int main()
{
    int num_of_students;   // max 5
    int num_of_subjects;   // max 4
    
    
    cout << "Enter number of students (max 5) : ";
    cin >> num_of_students;
    
    cout << "Enter number of subjects (max 4) : ";
    cin >> num_of_subjects;
    
    
    

// 2. Declare Arrays as variables
    string names[5];
    int grades[5][4];
    


// 3. Accept Inputs

    // first/outer loop (i)
    for (int i = 0;  i < num_of_students;    i++) 
    {
        cout << "\nEnter name for Student " << i + 1 << ": ";
        cin >> names[i];


        // second/inner loop (j)
        for (int j = 0; j < num_of_subjects; j++) 
        {
            cout << "Enter grade " << j + 1 << ": ";
            cin >> grades[i][j];
        }
        
        
    } // for loop





// 4, OUTPUT

// display highest to lowest (DESCENDING ORDER)
// using if condition


    cout << "\nName\tGrades\t\tTotal\tAverage\n";
    
    string topStudent;
    double highestAvg = 0;
    


    // OUTER LOOP - STUDENTS
    for(int i = 0; i < num_of_students; i++)
    {
    int total = 0;
    
    
    // print names
    cout << names[i] << endl;
    
    
    
    // INNER LOOP - SUBJECTS / GRADES
    // print grades and add them all to get total
    for(int j = 0; j < num_of_subjects; j++)
    {
        cout << grades[i][j] << " ";   // print grades
        
        total += grades[i][j];
    }
    



    double average = (double)total / num_of_subjects;
        
    // Print Total and Average
    cout << "\t" << total << "\t" << average << endl;



    // find out who Top Student
    if (average > highestAvg) 
    {
        highestAvg = average;
        topStudent = names[i];
    }


    

    
}  // for loop OUTER LOOP






    cout << "\nTop Student: " << topStudent << endl;

    return 0;



    
} // int main



