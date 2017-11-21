#include <stdio.h>
/*Program by Alen Thomas 16333003*/
/*Program to calculate if a child is living in an over-crowded dwelling or not*/

int main()
{
	double r, p, f;		//Variabel declaration
	
	printf("Please insert number of rooms in your home(excluding toilets):\n");	//User inputs information		
	scanf("%lf", &r);
	
	printf("Please insert number of people living in your home:\n");
	scanf("%lf", &p);
	
	puts("");
	
	f = p/(r*2); //Number of people divided by number of houses by 2 because 2 per room
	
	if( f > 1.00 )	//If the number is less than 1 then there is more people than houses
	{
		printf("Over-crowded dwelling");
	}
	else
	{
		printf("not over-crowded");
	}
}