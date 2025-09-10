#include <stdio.h>

int input_num(int);
int sum_of_digits(int);
void print_sum(int);

int main(){
    int num = 0;

    num = input_num(num);
    int sum = sum_of_digits(num);
    print_sum(sum);

    return 0;
}

int input_num(int num){
    printf("Enter the number: ");
    scanf("%d", &num);

    return num;
}

int sum_of_digits(int num){
    if (num < 0)
    {
        num = -num;
    }
    
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;//3,2,1
        num /= 10;//12,1,0
    }
    
    return sum;
}

void print_sum(int sum){
    printf("Sum of digits = %d", sum);
}