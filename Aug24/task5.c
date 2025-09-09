#include <stdio.h>
#define SIZE 3

int main()
{
    int arr[SIZE] = {};
    
    for(int i = 0; i < SIZE; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    int sum = 0, p = 1;
    
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i];
        p *= arr[i];
        // printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("Sum of arr elements = %d\n", sum);
    printf("Product of arr elements = %d\n", p);

    return 0;
}