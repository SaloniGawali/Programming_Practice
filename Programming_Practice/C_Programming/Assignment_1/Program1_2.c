// Program to print 5 times "Marvellous" on screen.

#include<stdio.h>

////////////////////////////////////////
//
// Function Name: Display
// Input: NA
// Output: NA    
// Description: It is used to display a message five times.
// Author: Ravindra Khairnar
// Date: 10/25/2026
//
////////////////////////////////////////

void Display()                                  // Function Definition.
{
    int i = 0;                                  // Local variable to control the loop

    for(i = 1; i <= 5; i++)                     // Loop to iterate from 1 to 5
    {
        printf("Marvellous\n");                 // Print "Marvellous" to the console in each iteration
    }
}

int main()                                      // Entry point function of the program

{
    Display();                                  // Function call to Display

    return 0;                                   // Return 0 to indicate successful execution of the program to the operating system
}