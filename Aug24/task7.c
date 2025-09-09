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
    
    int min = arr[0];
    
    for(int i = 1; i < SIZE; i++) {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    
    printf("Min of arr elements = %d\n", min);

    return 0;
}