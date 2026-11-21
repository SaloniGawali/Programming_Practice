// Accept one number and check whether that number is divisible by 5 or not.

#include<stdio.h>                           // importing standard input output header file for using printf and scanf functions

typedef int BOOL;                           // Defining a new data type BOOL as an alias for int to represent boolean values (true or false)
#define true 1                              // Defining a macro named true with a value of 1 to represent the boolean value true
#define false 0                             // Defining a macro named false with a value of 0 to represent the boolean value false      


////////////////////////////////////////
//
//  Function Name: check
//  Input: Integer
//  Output: Integer
//  Description: It is used to check if a number is divisible by 5.
//  Author: Ravindra Khairnar
//  Date: 10/25/2026
//
////////////////////////////////////////

int check(int iNo)                          // Function Definition witjh return type int or BOOL and one parameter iNo of type int to check if the number is divisible by 5
{
    if((iNo % 5) == 0)                      // Check if the remainder of iNo divided by 5 is equal to 0, indicating that iNo is divisible by 5
    {
        return true;                        // Return 1 (true) to indicate that the number is divisible by 5.
    }
    else
    {
        return false;                       // Return 0 (false) to indicate that the number is not divisible by 5.
    }
}

int main()
{
    int iValue = 0;                         // Local variable to store user input value
    BOOL bRet = false;                      // Local variable of type BOOL to store the return value of the check() function, initialized to false (0).

    printf("Enter number:\n");              // Accept user input.
    scanf("%d",&iValue);                    // Read an integer value from the user and store it in iValue.

    bRet = check(iValue);                   // Function call to check() with iValue as an argument, and store the return value in bRet.

    if(bRet == true)                        // Check if the return value bRet is equal to true (1), indicating that the number is divisible by 5    
    {
        printf("Divisible by 5");           // Print a message to the console indicating that the number is divisible by 5    
    }
    else                                    // If the return value bRet is not equal to true (1), indicating that the number is not divisible by 5           
    {
        printf("Not divisible by 5");       // Print a message to the console indicating that the number is not divisible by 5
    }

    return 0;                               // Return 0 to indicate successful execution of the program to the operating system
}