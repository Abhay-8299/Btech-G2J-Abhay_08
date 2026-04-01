#include <stdio.h>

int main() {
    int i, j, rows, columns, sum = 0;
    int matrix[10][10];

    
    printf("Enter the number of Rows: ");
    scanf("%d", &rows);
    printf("Enter the number of Columns: ");
    scanf("%d", &columns);

    
    if (rows != columns) {
        printf("The given order is not a square matrix. Diagonal sum cannot be calculated easily.\n");
        return 1; 
    }

    
    printf("Input elements in the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i = 0; i < rows; i++) {
        
        sum = sum + matrix[i][i]; 
    }

    
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of the main diagonal elements is: %d\n", sum);

    return 0;
}
