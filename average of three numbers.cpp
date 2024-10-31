#include<stdio.h>
int main()
{
	char name[400];
	float subject1, subject2, subject3;
	float average;
	printf("enter your name please :");
	scanf("%s", &name);
	printf("enter your first subject marks :");
	scanf("%f", &subject1);
	printf("enter your second subject marks :");
	scanf("%f",&subject2);
	printf("enter your third subject marks :");
	scanf("%f", &subject3);
	average=(subject1+subject2+subject3)/3;
	
	printf("Hey %s Your average of three subject is: %.2f", name, average);
	
	return 0;
}
