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
    
    for(int i = 1; i < SIZE; i++) {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    printf("Max of arr elements = %d\n", max);

    return 0;
}