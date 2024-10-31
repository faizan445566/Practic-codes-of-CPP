#include <stdio.h>

int main() {
    int a = 10;
    int b = 0; 

    // This line will cause a runtime error because b is zero
    printf("Result: %d\n", a / b);

    return 0;
}
