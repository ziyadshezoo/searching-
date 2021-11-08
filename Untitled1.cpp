#include <stdio.h>
#include<stdlib.h>
int main()
{int n ;
int m ;
int t;
t =0;
	printf("Enter Number of your rows :");
	int rows;
	scanf("%d",&rows);

	printf("Enter Number of your columns :");
	int columns;
	scanf("%d",&columns);
	
	int arr[rows][columns];//2d arr
	printf ("Enter your array:");
	for (int i=0 ;i<rows;i++)
	{
		for (int j =0 ;j<columns ;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf ("Enter number that you search:");
	int srch;
	scanf("%d",&srch);
		for (int i=0 ;i<rows;i++)
	{
		for (int j =0 ;j<columns ;j++)
		{
			if (srch==arr[i][j])	
				{t=1;
				n=i+1;m=j+1;//take the position 
				}
		}
	}
	if (t>0)
	{
		printf("the number you searched about is found in column %d and row %d",m,n);
	}
	else
	printf("the number you searched about is not found in the array ");
}
