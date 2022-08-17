/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int largestnumber[5] ,i , j ;
    for (i=0 ; i<5 ; i++)
    { 
        printf("Enter the elements of the array");
        scanf("%d" , &largestnumber[i]);
    }
    for (i=1 ; i<5; i++)
    { 
        if(largestnumber[0]< largestnumber[i])
        { 
            largestnumber[0]=largestnumber[i];
        }
    }
    printf("The largest number is %d" , largestnumber[0]);
    return 0;
}
