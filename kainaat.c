#include<stdio.h>

int main () {
	int marks[10],num[10], temp, tem, i ,j; 
	for (i=0; i<10;i++){
		printf("Enter your roll no:");
		scanf("%d" , &num[i]);
		printf("Enter your marks:");
		scanf("%d", &marks[i]);
	    }

for (i=0; i < 10;i++){
	for (j=i;j<10;j++)
	{
		if(marks[j]<marks[j])
		{
			temp = marks[j];
			marks[j] = marks[i];
			marks[i]= temp;
			tem= num[j];
			num[j]=num[i];
			num[i]=tem;
			
		}
	}
		      }
for (i=0;i<10;i++)
{
	printf("Roll no : %d\t\t\t Marks :%d\n", num[i], marks[10]);
} 
return 0 ;
	    }
			
