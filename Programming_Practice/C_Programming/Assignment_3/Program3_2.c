// Write a program which accept number from user and print even factors of that number.
#include<stdio.h>                                  // Standard Input Output Header File

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;                                   // If iNo is less than or equal to 0, make it positive
    }

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)                // Check if i is a factor and even
        {
            printf("%d\t",i);                         // Display the even factor
        }
    }
}

int main()                                            // Entry Point Function
{
    int iValue = 0;                                 // Local Variable    

    printf("Enter number \n");                      // Taking Input from user
    scanf("%d",&iValue);                            //  Storing Input in iValue

    DisplayFactor(iValue);                              // Function Call

    return 0;                                       // Exit Status
}