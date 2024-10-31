#include <stdio.h>
int main()
{
	float faren;
	float celsius;
	printf("\nenter current temperature in farenheit\n");
	scanf("%f", &faren);
	celsius=(faren-32)*5/9;
	printf("\nthe current temperature in celsius is %f", celsius);
	
return 0;
}
