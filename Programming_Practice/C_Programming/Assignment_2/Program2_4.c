// Accept two numbers from user and display first number in second number of times on screen

#include<stdio.h>                                   // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input : Integer, Integer 
// Output : None
// Description : It is used to display first number in second number of times on screen
// Author : Ravindra Khairnar
// Date : 10/26/2026
//
///////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)               // Function to display first number in second number of times on screen
{
    int iCnt = 0;                                   // Local Variable    

    if(iNo < 0)                                     // If number is negative then convert it into positive
    {
        iNo = -iNo;                                 // Change negative number into positive
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)       // Loop start from 1 to iFrequency
    {
        printf(" %d ",iNo);                         // Print first number on screen
    }
}

int main()                                          // Entry point function
{
    int iValue = 0;                                 // Variable to accept first number from user
    int iCount = 0;                                 // Variable to accept second number from user

    printf("Enter number : \n");                    // Accept first number from user
    scanf("%d",&iValue);                            // Read first number from user

    printf("Enter frequency : \n");                 // Accept second number from user
    scanf("%d",&iCount);                            // Read second number from user

    Display(iValue,iCount);                         // Function call to display first number in second number of times on screen

    return 0;                                       // Return success to OS

}