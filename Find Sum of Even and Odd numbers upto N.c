#include <stdio.h>

int main() {
    int N;
    int sumEven = 0;
    int sumOdd = 0;
    int i;


    printf("Enter the value of N: ");
    scanf("%d", &N);

    
    for (i = 1; i <= N; i++) {
        
        if (i % 2 == 0) {
            sumEven += i; 
        } else {
            sumOdd += i; 
        }
    }

    
    printf("Sum of all even numbers up to %d = %d\n", N, sumEven);
    printf("Sum of all odd numbers up to %d = %d\n", N, sumOdd);

    return 0;
}
