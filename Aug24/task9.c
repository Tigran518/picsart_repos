#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    
    for(int i = 0; i < SIZE; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    int odd_nums[SIZE] = {};
    int odd_nums_count = 0;
    
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] % 2 == 1){
            odd_nums[odd_nums_count] = arr[i];
            odd_nums_count++;
        }
    }
    
    printf("Odd numbers count = %d\n", odd_nums_count);

    for(int i = 0; i < odd_nums_count; i++) {
        printf("odd_nums_arr[%d] = %d\n", i, odd_nums[i]);
    }

    return 0;
}