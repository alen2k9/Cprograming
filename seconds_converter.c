#include <stdio.h>
/*Program written by Alen Thomas*/
/*Program to convert seconds into days, hours, minutes and extra seconds*/

void convert_time ( int total_secs , int *days , int *hours ,
int * minutes , int * seconds )
{
	int d, h, m, s;						/*declare different values*/
	int remaining_secs = total_secs;	/*set up the formula to convert*/
	
	d = remaining_secs / (60*60*24);	/*convert seconds into days*/
	remaining_secs %= (60*60*24);
	
	h = remaining_secs / (60*60);		/*convert remaining seconds into hours*/
	remaining_secs %= (60*60);
	
	m = remaining_secs / 60;			/*convert remaining minutes into hours*/
	remaining_secs %= 60;
	
	s = remaining_secs;					/*store remaining seconds*/

	* days = d;							/*pointer to store data to variable*/
	* hours = h;
	* minutes = m;
	* seconds = s;
}

int main(void)
{
	int total_secs;
	int days;
	int hours;
	int minutes;
	int seconds;	

	printf("Insert seconds to convert \n"); /*scan in input number to convert*/
	scanf("%d", &total_secs);

	convert_time ( total_secs , &days , &hours ,
	& minutes , & seconds );
	
	printf("Number of Days: %d \n", days);	/*print out each value after conversion*/

	printf("Number of Hours: %d \n", hours);

	printf("Number of Minutes: %d \n", minutes);

	printf("Number of Seconds: %d \n", seconds);
}