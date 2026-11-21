// Accept one number from user and print that number of * on screen

#include<stdio.h>                   // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input : Integer
// Output : None
// Description : It is used to display * on screen
// Author : Ravindra Khairnar
// Date : 10/26/2026
//
///////////////////////////////////////////////////////////////

void Display(int iNo)               // Function to display * on screen
{
    if(iNo < 0)                     // If number is negative then convert it into positive
    {
        iNo = -iNo;                 // Change negative number into positive
    }

    while(iNo > 0)                  // Loop start from iNo to 1
    {
        printf(" * ");              // Print * on screen
        iNo--;                      // Decrement the value of iNo
    }
}

int main()                          // Entry point function
{
    int iValue = 0;                 // Variable to accept number from user

    printf("Enter number : \n");    // Accept number from user
    scanf("%d",&iValue);            // Read number from user    

    Display(iValue);                // Function call to display * on screen

    return 0;                       // Return success to OS
}