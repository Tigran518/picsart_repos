#include <stdio.h>
#define SIZE 5

void input_elems(int[]);
void reverse_arr(int[]);
void print_elems(int[]);

int main(){
    int arr[SIZE] = {};

    input_elems(arr);
    reverse_arr(arr);
    print_elems(arr);

    return 0;
}

void input_elems(int arr[]){
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }
}

void reverse_arr(int arr[]){
    int temp = 0;
    for (int i = 0; i < SIZE / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }
}

void print_elems(int arr[]){
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}