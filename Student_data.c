#include <stdio.h>
#include <string.h>
/*Program by Alen Thomas 16333003
Program to create an array of structs of student data and to sort in decreasing gpa number*/

struct person 				//Struct declared
{
	unsigned int studentNum;
	char lastName[15];
	char firstName[10];
	char fieldOfStudy[50];
	int age;
	char sex; // ‘m’ or ‘f’
	double gpa;
};

int main()
{
	struct person student[6];	//array of structs
	int arr[6] = {0, 1, 2, 3, 4, 5};	//array of numbers to sort gpa
	
	int i, j, n;
	
	for(i = 0; i < 6; i++)	//User input data for each
	{
		printf("Student %d \n", i + 1);
		printf("-----------\n");
		printf("Student Number: ");
		scanf("%d", &student[i].studentNum);
		printf("Last Name: ");
		scanf("%s", student[i].lastName);
		printf("First Name: ");
		scanf("%s", student[i].firstName);
		printf("Field of Study: ");
		scanf("%s", student[i].fieldOfStudy);
		printf("Age: ");
		scanf("%d", &student[i].age);
		printf("(m)ale or (f)emale: ");
		scanf("%c", &student[i].sex);
		printf("Gpa: ");
		scanf("%lf", &student[i].gpa);
	}
	
	for (i = 0; i < 6; i++)	//Array sorted by Gpa
    {
        for (j = i + 1; j < 6; j++)
        {
            if (student[i].gpa < student[j].gpa)
            {
                n =  arr[i];
                arr[i] = arr[j];
                arr[j] = n;
            }
        }
    }
	
	printf("Student details in descending Gpa order \n\n");
	
	for(i = 0; i < 6; i++)	//Printed out
	{
		printf("Student %d\n", i + 1);
		printf("------------\n");
		printf("Student Number: %d\n", student[arr[i]].studentNum);
		printf("First Name: %s\n", student[arr[i]].firstName);
		printf("Last name: %s\n", student[arr[i]].lastName);
		printf("Field of Study: %s\n", student[arr[i]].fieldOfStudy);
		printf("Age: %d\n", student[arr[i]].age);
		printf("Sex: %c\n", student[arr[i]].sex);
		printf("Gpa: %.2lf\n", student[arr[i]].gpa);
	}
	
	  
}