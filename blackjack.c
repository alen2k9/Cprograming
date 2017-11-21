#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*Program by Alen Thomas 16333003*/
/*Blackjack program with dealer on c language*/
int main()
{
	char type[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};	//Array with characters of each type of card 
	int value[] = {1,2,3,4,5,6,7,8,9,10,10,10,10};							//Array of numbers to use to add till 21
	int sum = 0;															//other variables
	int A1 = 0;
	int i;
	char h;
	int dealer;
	printf("Welcome to Blackjack\n\n");
	
	srand (time(0));														//Number generator
	
	do
	{
		i = rand() % 13;
		
		printf("The card you got is %c\n", type[i]);	//displays the number based on card given
		
		if(i == 0)										//Case for Ace
		{
			A1 = 11;
			sum = sum + A1;
		}
		else
		{
			sum = sum + value[i];
		}
		
		if(A1 == 11 && sum > 21)
		{
			sum = sum - 10;
			A1 = 0;
		}
		
		printf("Your hand is %d\n\n", sum);			//print out user result
		
		if(sum == 21)
		{
			printf("Blackjack!!!!!\n\n");
		}
		if(sum > 21)
		{
			printf("You lose!!\n\n");
		}

		if(sum < 21)
		{
			printf("[h]it or [s]top?\n");
			scanf("%c", &h);
		}
		
	}while(h == 'h');

	dealer = 1 + rand() % 30;						//Gets random value to deal against dealer
	
	printf("Dealer hand is %d\n\n", dealer);
	
	if(dealer > sum && dealer < 21)
	{
		printf("Dealer is the winner\n\n");
	}
	else
	{
		printf("You win!!!!\n\n");
	}
}