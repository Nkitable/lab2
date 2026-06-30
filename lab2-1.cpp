#include <stdio.h>

int main() {
    double a = 7.0;
    double b = 12.0;
    double c = -21.0;
    
    printf("--- Task 2 (Variant 2) ---\n");
    printf("Constants: a = %.1f, b = %.1f, c = %.1f\n", a, b, c);
    
    double y = (a - b) / (2.0 * b + c) + (1.0 / a);
    
    printf("Function value y = %f\n", y);
    
    return 0;
}
