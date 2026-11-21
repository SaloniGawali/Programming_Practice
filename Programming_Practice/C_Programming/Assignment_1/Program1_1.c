// Program to devide two numbers.

#include<stdio.h>

////////////////////////////////////////
//
// Function Name: Divide
// Input: Integer, Integer
// Output: Float    
// Description: It is used to perform division of two numbers
// Author: Ravindra Khairnar
// Date: 10/25/2026
//
////////////////////////////////////////

float Divide(int iNo1, int iNo2)                    // Function Definition with return type float and two parameters
{
    float iAns = 0;                                 // Local variable with float data type decause division can result in decimal values

    if(iNo2 == 0)                                   // Input validation to check if the second number is zero
    {
        return -1;                                  // Return -1 to indicate an error
    }

    iAns = (float)iNo1 / (float)iNo2;               // Perform division and typecast to float to ensure decimal result

    return iAns;                                    // Return the result of the division
}

int main()                                          // Entry point function of the program
{
    int iValue1 = 15, iValue2 = 5;                  // Local variables to store user input values
    float iRet = 0;                                 // Local variable to store the result of the division

    iRet = Divide(iValue1, iValue2);                // Function call to Divide with two integer arguments

    printf("Division is: %f\n", iRet);              // Print the result of the division to the console

    return 0;                                       // Return 0 to indicate successful execution of the program to the operating system
}