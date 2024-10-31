#include <cstdio>

int main() {
    int a = 10;
    int b;

    printf("Enter a number to check if it is divisible by 10: ");
    scanf("%d", &b); 

    
    if (b != 0) {
        printf("Result: %d\n", a / b);
    } else {
        printf("Error: Please enter integer.\n");
    }

    return 0;
}

