#include <stdio.h>

int main() {
    int i, n;


    printf("Enter the value of N: ");

    
    scanf("%d", &n);

    
    printf("The first %d natural numbers are: ", n);

   
    for (i = 1; i <= n; i++) {
        
        printf("%d ", i);
    }

    
    printf("\n");

    return 0; // Indicate successful program execution
}
