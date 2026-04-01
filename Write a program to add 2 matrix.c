#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int m1[rows][cols], m2[rows][cols], sum[rows][cols];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &m1[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &m2[i][j]);

    // Perform Addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = m1[i][j] + m2[i][j]; 
        }
    }

    printf("Sum:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
