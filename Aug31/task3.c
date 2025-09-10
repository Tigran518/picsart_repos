#include <stdio.h>
#define SIZE 3

int sum(int[][SIZE]);

int main(){
    int matrix[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}};
    
    printf("Sum = %d\n", sum(matrix));

    return 0;
}

int sum(int matrix[][SIZE]){//[][SIZE]

    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i; j < SIZE; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}