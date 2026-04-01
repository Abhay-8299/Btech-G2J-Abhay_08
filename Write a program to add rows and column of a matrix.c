#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("\nThe matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nCalculation of Row Sum:\n");
    for (int i = 0; i < m; i++) {
        int rowsum = 0;
        for (int j = 0; j < n; j++) {
            rowsum = rowsum + matrix[i][j];
        }
        printf("Sum of elements in Row %d is %d\n", i, rowsum);
    }

    
    printf("\nCalculation of Column Sum:\n");
    for (int j = 0; j < n; j++) { 
        int colsum = 0;
        for (int i = 0; i < m; i++) { 
            colsum = colsum + matrix[i][j];
        }
        printf("Sum of elements in Column %d is %d\n", j, colsum);
    }

    return 0;
}
