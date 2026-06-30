#include <stdio.h>
#include <math.h> 

int main() {
    int x, y, z;
    
    printf("--- Task 3 (Variant 2) ---\n");
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter integer y: ");
    scanf("%d", &y);
    printf("Enter integer z: ");
    scanf("%d", &z);
    
    double numerator = 1.0 + cos((double)(y - 2));
    double denominator = (pow((double)x, 4.0) / 2.0) + pow(sin((double)z), 2.0);
    
    if (denominator == 0) {
        printf("\nError: Denominator is zero!\n");
        return 1;
    }
    
    double b = numerator / denominator;
    
    printf("\nFunction result b = %f\n", b);
    
    return 0;
}
