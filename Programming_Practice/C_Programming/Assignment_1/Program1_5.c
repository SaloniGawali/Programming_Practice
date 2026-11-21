// Accept one number from user and print that number of * on screen.

#include<stdio.h>                           // importing standard input output header file for using printf and scanf functions

////////////////////////////////////////
//
//  Function Name: Accept
//  Input: Integer
//  Output: NA
//  Description: It is used to accept a number from user and print that number of * on screen.
//  Author: Ravindra Khairnar
//  Date: 10/25/2026
//
////////////////////////////////////////

void Accept(int iNo)                        // Function Definition with return type void and one parameter iNo of type int to accept a number from user and print that number of * on screen
{
    int iCnt = 0;                           // Local variable to control the loop

    for(iCnt = 1; iCnt <= iNo; iCnt++)      // Loop to iterate from 1 to iNo
    {
        printf("*");                        // Print * to the console in each iteration
    }
}

int main()                                  // Entry point function of the program
{
    int iValue = 0;                         // Local variable to store user input value

    iValue = 5;                             // Initialize iValue to 5 to control the number of * to be printed

    Accept(iValue);                         // Function call to Accept with iValue as an argument

    return 0;                               // Return 0 to indicate successful execution of the program to the operating system
}