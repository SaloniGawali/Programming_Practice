// Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>                                  // Standard Input Output Header File

//////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Input : Integer
// Output : None
// Description : Accept one number from user and print that number of even numbers on screen
// Author : Ravindra Khairnar
// Date : 10/31/2026
//
///////////////////////////////////////////////////////////////

void PrintEven(int iNo)                             // Function Definition
{
    if(iNo <= 0)                                    // Updator
    {           
        return;                                     // If iNo is less than or equal to 0, return from the function                     
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)          // Looping from 1 to iNo
    {       
        printf("%d\t",iCnt*2);                      // Displaying even numbers on screen
    }
}

int main()                                            // Entry Point Function
{
    int iValue = 0;                                  // Local Variable    

    printf("Enter number \n");                       // Taking Input from user
    scanf("%d",&iValue);                             //  Storing Input in iValue

    PrintEven(iValue);                               // Function Call

    return 0;                                        // Exit Status
}
