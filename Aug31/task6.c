#include <stdio.h>

int isPrime(int);

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (isPrime(num))
    {
        printf("Number %d is prime",num);
    } else {
        printf("Number %d isn't prime",num);
    }
    
    return 0;
}

int isPrime(int num){
    if (num < 2)
    {
        return 0;//isn't prime
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            return 1;//is prime
        } else {
            return 0;
        }
    }
}