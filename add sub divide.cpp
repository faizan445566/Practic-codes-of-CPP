#include<stdio.h>
int main(){
	int integer1=45;
	int integer2=56;
	float decimal1=2.56;
	float decimal2=61.31;
	
	int addint=integer1+integer2;
	int subint=integer1-integer2;
	int mulint=integer1*integer2;
	float divint= (float)integer1/integer2;
	
	float addfloat=decimal1+decimal2;
	float subfloat=decimal1-decimal2;
	float mulfloat=decimal1*decimal2;
	float divfloat= decimal1/decimal2;
	
	printf("INTEGER ANSWERS\n\n");
	printf("Addition: %d + %d = %d\n", integer1, integer2, addint);
    printf("Subtraction: %d - %d = %d\n", integer1, integer2, subint);
    printf("Multiplication: %d * %d = %d\n", integer1, integer2, mulint);
    printf("Division: %d / %d = %.2f\n\n", integer1, integer2, divint);
    
    printf("FLOAT ANSWERS\n\n");
    printf("Addition: %.2f + %.2f = %.2f\n", decimal1, decimal2, addfloat);
    printf("Subtraction: %.2f - %.2f = %.2f\n", decimal1, decimal2, subfloat);
    printf("Multiplication: %.2f * %.2f = %.2f\n", decimal1, decimal2, mulfloat);
    printf("Division: %.2f / %.2f = %.2f\n", decimal1, decimal2, divfloat);
	
 return 0;
	
	
}
