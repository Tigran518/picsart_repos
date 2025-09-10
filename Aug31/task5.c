#include <stdio.h>
#define SIZE 5

void is_desc(int[]);

int main(){
    int arr[SIZE] = {};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }
    
    is_desc(arr);

    return 0;
}

void is_desc(int arr[]){
    int flag = 1;//is descending
    for (int i = 0; i < SIZE - 1; i++)
    {
        if (arr[i] <= arr[i+1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        printf("Yes");
    } else{
        printf("No");
    }
}