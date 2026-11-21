// Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>                   // Header file inclusion

//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input : Integer
// Output : None
// Description : It is used to display Hello or Demo on screen
// Author : Ravindra Khairnar
// Date : 10/26/2026
// 
///////////////////////////////////////////////////////////////

void Display(int iNo)               // Function to display Hello or Demo on screen
{
    if(iNo < 10)                     // If number is less than 10 then print Hello
    {
        printf("Hello\n");           // Print Hello on screen
    }
    else                             // If number is greater than or equal to 10 then print Demo
    {
        printf("Demo\n");            // Print Demo on screen
    }
}

int main()                          // Entry point function
{
    int iValue = 0;                 // Variable to accept number from user

    printf("Enter number : \n");    // Accept number from user
    scanf("%d",&iValue);            // Read number from user    

    Display(iValue);                // Function call to display Hello or Demo on screen

    return 0;                       // Return success to OS
}