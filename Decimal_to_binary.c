#include <stdio.h>
/*Program by Alen Thomas 16333003*/
/*Program to convert decimal number into binary number*/

int convert(int);		//Function prototype

int main()
{
	int binary;		//Variable declaration
	int decimal;
	
	printf("Input a decimal number"); 	//User inputs decimal number
	scanf("%d", &decimal);
	
	binary = convert(decimal);	//Function called
	
	printf("Binary number %d\n", binary);
}

int convert(int decimal)	//Function body
{
	if(decimal == 0)
	{
		return 0;
	}
	else
	{
		return(decimal % 2 + 10 * convert(decimal / 2));	//Recursion
	}
}