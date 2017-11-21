#include <stdio.h>

int money1 = 0; //Global variable

void money();	//Function prototype
int enter(int number);
int exit1(int number);
void print_number(int number);

int main()
{
	int number = 0;	//Local variable
	int n;	//Variable declared
	
	printf("1-Person enters stadium\n");	//Users choice
	printf("2-Person leaves stadium\n");
	printf("3-End\n\n");
	
	do		//Loop to increase money and people and to decrease number and print it out
	{
		scanf("%d", &n);
		
		if( n == 1 )
		{
			number = enter(number);
			money1 = money1 + 20;
		}
		
		if( n == 2 )
		{
			number = exit1(number);
		}
		
		money();
		print_number(number);
		
	}while(n != 3);
	
	printf("\n\nCalculating Ended\n\n\n")
} 

void money()	//Function bodies
{
	printf("The amount of money currently is %d\n", money1);
}

int enter(int number)
{
	number = number + 1;
	return number;
}

int exit1(int number)
{
	number = number - 1;
	return number;
}

void print_number(int number)
{
	printf("There are currently %d people at the concert\n", number);
}