#include <stdio.h>
/*Program by Alen Thomas 16333003
  Program that defines and uses 2 macros; one macro prints the elements of
an integer array and the other macro prints the elements in reverse order*/

#define PRINTARR(array, length_array)\		//macros for printing and reversing array
for(int i = 0; i < length_array; i++) \
printf("%d\n",array[i]);

#define PRINTREVERSE(array, length_array)\
for(int i = length_array-1; i >= 0; i--)\
printf("%d\n",array[i]);
										



int main()
{
	int array[10] = {2, 4, 6, 8, 10, 20, 30, 40, 60, 80};	//Array
	printf("Array sample: \n");
	PRINTARR(array, 10);	//Array printed in order
	printf("Array printed in reverse: \n");
	PRINTREVERSE(array, 10);	//Array printed in reverse
}	