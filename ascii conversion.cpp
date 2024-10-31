#include<stdio.h>
int main(){
	
	float decimal;
	int integer;
	char letter='F';
	
	
	printf("Please Enter a Decimal Number: ");
	scanf("%f",&decimal);
 integer=(int)decimal;
	printf("The Converted Integer Answer is: %d\n", integer);
	
	char aci=letter+integer;
	printf("Performing an ASCII Conversion Gives the Answer: %d\n", aci);
	return 0;
	
}
