#include <stdio.h>

int main() {
    int matrix[3][3] = {{7, 5, 2}, {3, 7, 4}, {7, 7, 1}};
    int target_num = 7;
    int count = 0;
    int rows = 3;
    int cols = 3;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            if (matrix[i][j] == target_num) {
                count++;
            }
        }
    }

    printf("The number %d occurs %d times in the matrix.\n", target_num, count);

    return 0;
}
