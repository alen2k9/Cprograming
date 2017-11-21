#include <stdio.h> 
/*Program by Alen Thomas 16333003*/
/*Program to solve tower of hanoi by Recursion*/

void row(int, char ,char, char);	///Function protoype

int main()
{
	int n;
	
	printf("Number of disks:");	//User inputs the number of disks
	scanf("%d", &n);
	
	printf("Moves:\n");
	
	row(n, 'a', 'b', 'c');	//Call function

}

void row(int n, char source, char target, char temp)	
{
	if(n == 1)
	{
		printf("\nDisk 1 moved from %c to %c", source, target);
	}
	else
	{
	row( n - 1, source, temp, target);							//Recursion
	printf("\nDisk %d moved from %c to %c", n, source, target);
	row( n - 1, temp, target, source);
	}
}