#include <stdio.h>
/*Program by Alen Thomas 16333003*/
/*Portfolio item 1: Calculate donatation to charity based on number of sales*/

int main()
{
	double n, k;									//Declare variables
	
	printf("Input the amount of sales in euros: ");
	scanf("%lf", &n);								//User inputs number
	
	if( n <= 5000 )									//Algorithim to calculate k(charitable)
	{
		k = n*0.05;
	}
	else if( n > 5000 && n <= 10000 )
	{
		k = (5000*0.05)+(n-5000)*0.1; 
	}
	else if( n > 10000 )
	{
		k = (5000*0.05)+(5000*0.1)+(n-10000)*0.15;
	}
	printf("Amount for charity:%.2lf Euro", k);	//Prints out result
	
	
}