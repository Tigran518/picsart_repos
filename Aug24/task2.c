#include <stdio.h>

int main()
{
    int num = 0;
    
    do{
    printf("Enter the number: ");
    scanf("%d", &num);
    } while(num < 0);
    
    int res_of_fac = 1;
    for (int i = 2; i <= num; i++){
        res_of_fac *= i;
    }
    printf("Result of factorial = %d", res_of_fac);
    
    return 0;
}