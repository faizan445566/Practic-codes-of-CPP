#include<stdio.h>
#include <stdbool.h>
int main(){
	// Declare all primitive data types
	int number=10;
	float decimal=3.14;
	char letter='A';
	bool bool_var=true;
	double double_var=3.14131;
	
	//now printing each data type
	printf("Integer is: %d\n", number);
	printf("Float is: %.2f\n", decimal);
	printf("Character is: %c\n", letter);
	printf("Bool is: %s\n", bool_var ? "True" :"False");
	printf("Double is: %.10lf\n", double_var);
   
   return 0;
	
}
