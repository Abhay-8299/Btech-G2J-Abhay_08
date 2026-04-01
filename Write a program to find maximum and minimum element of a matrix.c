#include <stdio.h>

int main() {
    
    int rows = 3;
    int cols = 4;
    
    
    int matrix[3][4] = {
        {10, 20, 5, 40},
        {15, 25, 30, 8},
        {1, 50, 2, 99}
    };
    
    
    int max = matrix[0][0];
    int min = matrix[0][0];
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    
    
    printf("The given matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMaximum element in the matrix is: %d\n", max);
    printf("Minimum element in the matrix is: %d\n", min);
    
    return 0;
}
