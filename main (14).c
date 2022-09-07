/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define size 5

int queue[size];
int f = -1;
int r = -1;
int size = 5;

void enqueue(int);
void dequeue();
void show();
void isEmpty();

int main()
{
    int ch , n;
    
    while(1)
    {
        printf("\n --------Queue _ Menu----------");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. isEmpty");
        printf("\n 4. show");
        printf("\n 5. Exit");
        printf("\n Enter your choice: ");
        scanf("\n %d" , &ch);
        
        switch(ch)
        {
            case 1:
                printf("Enter a integer : ");
                scanf("%d" , &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4: 
                show();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n Invalid Choice:");
                break;
        }
    }

}

void enqueue(int n)
{
    if(f == -1 && r == -1)
    {
        
        f++;
        queue[++r] = n;
    } else  {
        if (f== (r++)%size)
        {
            printf("Queue Overflow");
        } else {
            r = (r++)%size;
            queue[r] = n;
        }
    }
}

void dequeue()
{
    if(r == -1 && f == -1)
    {
        printf("Queue is Empty!");
    }
    else if(r == f)
    {
        f = -1;
        r = -1;
    } else {
        f = (f++)%size;
    }
}
void isEmpty()
{
    if(f == -1 && r == -1)
    {
        printf("Queue is Empty!");
    } else {
        printf("Queue is not Empty!");
    }
}
void show()
{
    int i , j;
    if(f == -1 && r == -1)
    {
        printf("Queue i Empty!");
    } else {
        for(i = f; i <= size ; i++)
        {
            j = i % size;
            
            if(r == f)
            {
                printf("%d <- front & rear" , queue[j]);
            }
            else if(i == f)
            {
                printf("%d <- front" , queue[j]);
            }
            else if(i == r)
            {
                printf(" %d <- rear" , queue[j]);
            }
            else
            {
                printf("%d" , queue[j]);
            }
        }
    }
}