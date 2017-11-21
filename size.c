#include <stdio.h>
/*Program by Alen Thomas 16333003
Program to display the size of char, int, long, long long,
double, long double, float, an array of integers, a pointer to an array*/

int main()
{
	char a;	//Each different type of variable declared for each types
	int b;
	long c;
	long long d;
	double e;
	long double f;
	float g;
	int arr[10];
	int *p;
	p = arr;
	
	printf("The of a char is %d bytes \n", sizeof(a));	//Use sizeof function to display the length in bytes of each type
	printf("The of an int is %d bytes \n", sizeof(b));
	printf("The of a long int is %d bytes \n", sizeof(c));
	printf("The of a long long is %d bytes \n", sizeof(d));
	printf("The of a double is %d bytes \n", sizeof(e));
	printf("The of a long double is %d bytes \n", sizeof(f));
	printf("The of a float is %d bytes \n", sizeof(g));
	printf("The of an int array with 10 digits is %d bytes \n", sizeof(arr));
	printf("The of a pointer to an array is %d bytes \n", sizeof(p));

}