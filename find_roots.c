#include <stdio.h>
#include <math.h>
/*Program written by Alen Thomas 16333003*/
/*To find the roots of an equation */
int quadroots(double a, double b, double c, double *r1p, double *r2p);

int main()
{
	double a, b, c, r1, r2;					/*Declare variables*/				
	double ret;
	printf("Insert values for a, b and c and press enter after each \n");
	printf("a=");
	scanf("%lf", &a);						/*scan in values for a,b and c*/
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);
	
	ret = quadroots(a, b, c, &r1, &r2);
	
	if(ret = 0)
	{
		printf("The roots were complex \n");	/*if complex numbers are present*/
	}
	else
	{
		printf("roots are %lf and %lf", r1, r2 );	/*print out result after function*/
	}
	
}
int quadroots(double a, double b, double c, double *r1p, double *r2p)
{
	*r1p = (-2.0*c)/(b + sqrt((b*b)-(4.0*a*c))); /*formula for the 2 roots*/
	*r2p = (-b-sqrt((b*b)-(4.0*a*c)))/(2.0*a);
 
	return 2;
}