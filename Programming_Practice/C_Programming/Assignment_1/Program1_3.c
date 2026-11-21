// Program to print 5 to 1 numbers on screen.

#include<stdio.h>

////////////////////////////////////////
//
//  Function Name: Display
//  Input: NA
//  Output: NA
//  Description: It is used to display numbers from 5 to 1 in decreasing order.
//  Author: Ravindra Khairnar
//  Date: 10/25/2026
//
////////////////////////////////////////

void Display()                              // Function Definition.
{
    int i = 0;                              // Local variable to control the loop

    i = 5;                                  // Initialize i to 5 to control the number of iterations

    while(i != 0)                           // Loop to iterate while i is not equal to 0
    {
        printf("%d\n",i);                   // Print the current value of i to the console

        i--;                                // Decrement i by 1 in each iteration to eventually terminate the loop
    }
}

int main()                                  // Entry point function of the program
{
    Display();                              // Function call to Display

    return 0;                               // Return 0 to indicate successful execution of the program to the operating system
}