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
    
    int max = arr[0];
    int max_ind = 0;
    
    for(int i = 1; i < SIZE; i++) {
        if(max < arr[i]){
            max_ind = i;
        }
    }
    
    printf("Index of max value = %d\n", max_ind);

    return 0;
}