#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Program by Alen Thomas 16333003*/
/*Program for user to create a multidimensional array, find sum of each row and column
 find sum of the whole array, average of rows and columns. Find average of the whole array
 and find a random number from the array*/

int main()
{
	int a, b, l, avg;	//declare variables
	int arr[50][50];
	int count[50];
	int num[50];
	int i, j;
	int sr = 0;
	int sc = 0;
	int s = 0;
	
	time_t t;
	srand((unsigned int) time(&t));
	
	printf("Enter the number of rows of the first matrix:\n");				//User inputs the length of multidimensional array
	scanf("%d", &a);
	
	printf("Enter the number of columns of the first matrix:\n");
	scanf("%d", &b);
	
	puts("Please input values for array:");
	
	for (i = 0; i < a; i++)													//User inputs values into array
	{
		for (j = 0; j < b; j++)
		{
			scanf("%d", &l);
			arr[i][j] = l;
		}
	}
			
	puts("");
	
	for (i = 0; i < a; i++)				//prints out array in a table 
	{
		for (j = 0 ; j < b; j++) 
	    {
			printf("%d\t", arr[i][j]);
	    }
		puts("");
	}
	
	puts("");
	
	for (i = 0; i < a; i++)			//print sum of rows
	{
		for (j = 0 ; j < b; j++) 
	    {
			sr = sr + arr[i][j];
	    }
		printf("The sum of row %d is %d\n", i + 1, sr);
		sr = 0;
	}
	puts("");
	
	for (j = 0 ; j < b; j++) 		//print sum of columns
	{
		for (i = 0; i < a; i++)
	    {
			sc = sc + arr[i][j];
	    }
		printf("The sum of column %d is %d\n", j + 1, sc);
		sc = 0;
	}
	puts("");
	
	for (i = 0; i < a; i++)			//prints sum of whole array
	{
		for (j = 0 ; j < b; j++) 
	    {
			s = s + arr[i][j];
	    }
	}
	printf("The sum of the whole array is %d\n", s);
	puts("");
	
	for (i = 0; i < a; i++)			//Finds the average of each row
	{
		for (j = 0 ; j < b; j++) 
	    {
			sr = sr + arr[i][j];
	    }
		avg = sr/b;
		printf("The average of row %d is %d\n", i + 1, avg);
		sr = 0;
	}
	puts("");
	
	for (j = 0 ; j < b; j++) 		//Finds average of each column
	{
		for (i = 0; i < a; i++)
	    {
			sc = sc + arr[i][j];
	    }
		avg = sc/a;
		printf("The average of column %d is %d\n", j + 1, avg);
		sc = 0;
	}
	puts("");
	
	avg = s/(a*b);					//finds average of the whole array
	printf("Average of the whole array is %d\n\n", avg);
	
	i = rand() % a;					//Finds random integer in array
	j = rand() % b;
	
	printf("Random number from array is %d\n", arr[i][j]);
}
