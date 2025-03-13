/*
Author:           Pengolodh
Class:            CSI-240-04
Assignment:       Lab 1
Date Assigned:    01/26/2024
Due Date:         01/30/2024 @ 1:00 PM

Description:
A brief description of the purpose of the file.

Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic staff;
and/or
- Communicate a copy of this assignment to a plagiarism checking service (which may
then retain a copy of this assignment on its database for the purpose of future
plagiarism checking)
-----------------------------------------------------------------------------------------
Sources:
-https://stackoverflow.com/questions/10274162/how-to-find-2d-array-size-in-c
*/

#include "header.h"
#include "functions.cpp"

int main ()
{
    // Initialize array
    int myArr[ROW][COL];

    // Populate array
    popArr(myArr);

    //Print array
    printArr(myArr);

    // Prints values divisible by 5
    divFive(myArr);

    // Prints the total of each column
    sum(myArr);
    return 0;
}