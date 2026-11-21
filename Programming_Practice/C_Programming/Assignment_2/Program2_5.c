// Accept number from user and check wherther number is even or odd

#include<stdio.h>                   // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Input : Integer  
// Output : Boolean
// Description : It is used to check wherther number is even or odd
// Author : Ravindra Khairnar
// Date : 10/26/2026
//
///////////////////////////////////////////////////////////////

typedef int BOOL;                                           // Defining BOOL as Integer
#define TRUE 1                                              // Defining TRUE as 1
#define FALSE 0                                             // Defining FALSE as 0

BOOL ChkEven(int iNo)                                       // Function to check wherther number is even or odd
{
    if(iNo % 2 == 0)                                        // If number is divisible by 2.
    {
        return TRUE;                                        // Return TRUE if number is even
    }
    else                                                    // If number is not divisible by 2.
    {
        return FALSE;                                       // Return FALSE if number is odd
    }
}

int main()                                                  // Entry point function
{
    int iValue = 0;                                         // Variable to accept number from user
    BOOL bRet = FALSE;                                      // Variable to accept return value from function

    printf("Enter number : \n");                            // Accept number from user
    scanf("%d",&iValue);                                    // Read number from user

    bRet = ChkEven(iValue);                                 // Function call to check wherther number is even or odd

    if(bRet == TRUE)                                        // If return value is TRUE then number is even
    {
        printf("%d is Even Number\n",iValue);               // Print number is even on screen
    }
    else
    {
        printf("%d is Odd Number\n",iValue);                // Print number is odd on screen
    }

    return 0;                                               // Return success to OS
}