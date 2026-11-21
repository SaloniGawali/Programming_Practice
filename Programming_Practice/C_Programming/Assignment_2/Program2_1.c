#include<stdio.h>                           // Standard Input Output Header File

//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input : Integer
// Output : None
// Description : It is used to display * on screen
// Author : Ravindra Khairnar
// Date : 10/25/2026
//
///////////////////////////////////////////////////////////////

void Display(int iNo)                       // Function Definition
{
    int iCnt = 0;                           // Local Variable

    if(iNo < 0)                             // Updator
    {
        iNo = -iNo;                         // Converting Negative to Positive
    }

    while(iCnt < iNo)                       // Looping Till iCnt is less than iNo
    {
        printf(" * ");                      // Displaying * on Screen
        iCnt++;                             // Incrementing iCnt
    }
}

int main()                                  // Entry Point Function
{
    int iValue = 0;                         // Local Variable

    printf("Enter number : \n");            // Taking Input from user
    scanf("%d",&iValue);                    // Storing Input in iValue

    Display(iValue);                        // Function Call

    return 0;                               // Exit Status
}