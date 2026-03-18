#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 

    
    printf("Enter base number (x): ");
    scanf("%d", &base);
    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    
    if (exponent == 0) {
        result = 1;
    } else {
        
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }

    
    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}
