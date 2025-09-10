#include <stdio.h>

void mult_table(int);

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    mult_table(num);

    return 0;
}

void mult_table(int num){
    printf("Multiplication table of number %d\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}