#include <iostream>
int main()
{
	int a;
	float b;
	float c;
	float sum;
printf("enter the number without decimals\n");
scanf("%d", &a);
printf("enter the first number with decimals\n");
scanf("%f", &b);
printf("enter the second number with decimals\n");
scanf("%f", &c);
sum=a+b+c;
printf("\nYour answer of all numbers is %.2f", sum);


	return 0;
}
