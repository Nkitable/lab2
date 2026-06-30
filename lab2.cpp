#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("--- Task 1 (Variant 2) ---\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    if (num1 == 0) {
        printf("\nError: Division by zero is impossible (first number is 0)!\n");
        return 1;
    }
    
    int product = num1 * num2;
    int remainder = num2 % num1;
    int division = num2 / num1;
    
    printf("\nResults:\n");
    printf("Product of numbers: %d\n", product);
    printf("Remainder of dividing 2nd by 1st: %d\n", remainder);
    printf("Integer division of 2nd by 1st: %d\n", division);
    
    return 0;
}