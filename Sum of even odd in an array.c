#include <stdio.h>

int main() {
    int arr[100]; 
    int n;        
    int even_sum = 0;
    int odd_sum = 0;
    int i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        
        if (arr[i] % 2 == 0) {
            even_sum += arr[i]; 
        } else {
            odd_sum += arr[i];
        }
    }

    
    printf("Sum of all even numbers = %d\n", even_sum);
    printf("Sum of all odd numbers = %d\n", odd_sum);

    return 0;
}
