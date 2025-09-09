#include <stdio.h>

int main()
{
    int num = 0, deg = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Enter the degree of the number: ");
    scanf("%d", &deg);
    
    int result = 1;
    for (int i = 1; i <= deg; i++){
        result *= num;
    }
    printf("%d", result);
    
    return 0;
}