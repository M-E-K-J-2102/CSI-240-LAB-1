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

/* Function:   divFive(int (*)[COL])
*   Purpose:   prints the numbers in the array divisible by 5 and formats it
*       Pre:   array must be initialized and populated first
*      Post:   the values of the array divisible by 5 are printed
****************************************************************/
void divFive(int (*arr)[COL])
{
    cout << "Nums divisible by 5:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] % 5 == 0) // only prints values divisible by 5
            {
                cout << arr[i][j];

                // Formats the array properly
                if (arr[i][j] < 10)
                {
                    cout << "   ";
                }
                else if (arr[i][j] == 100)
                {
                    cout << " ";
                }
                else if (arr[i][j] > 9)
                {
                    cout << "  ";
                }
            }
        }
    }
    
    cout << endl << endl;
    return;
}

/* Function:   popArr(int (*)[COL])
*   Purpose:   populates the array thats passed as a parameter
*       Pre:   array must be initialized first
*      Post:   array is filled with random values
****************************************************************/
void popArr(int (*arr)[COL])
{
    // Seed for RNG
    srand(time(0));

    for (int i = 0; i < ROW; i++) // Populates array with random numbers 0-100
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 101;
        }
    }
    return;
}

/* Function:   printArr(int (*)[COL])
*   Purpose:   prints the array and formats it
*       Pre:   array must be initialized and populated first
*      Post:   the values of the array are printed
****************************************************************/
void printArr(int (*arr)[COL])
{
    cout << "Original Array:" << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j];

            // Formats the array properly
            if (arr[i][j] < 10)
            {
                cout << "   ";
            }
            else if (arr[i][j] == 100)
            {
                cout << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }	

    cout << endl;
    return;
}

/* Function:   sum(int (*)[COL])
*   Purpose:   prints the array and formats it
*       Pre:   array must be initialized and populated first
*      Post:   the values of the array are printed
****************************************************************/
void sum(int (*arr)[COL])
{
    int total;

    cout << "Sum of columns:" << endl;
    for (int i = 0; i < COL; i++)
    {
        total = 0;

        for (int j = 0; j < ROW; j++)
        {
            // Adds each element of the row
            total += arr[j][i];
        }

        cout << total;

        // Formats the array properly
        if (total < 10)
        {
            cout << "   ";
        }
        else if (total == 100)
        {
            cout << " ";
        }
        else
        {
            cout << "  ";
        }
    }	
    cout << endl << endl;
    return;
}