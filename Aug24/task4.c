#include <stdio.h>

int main()
{
    float num1 = 0.0, num2 = 0.0;
    char op = '\0';
    
    printf("Enter 2 numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Enter the operator: ");
    scanf(" %c", &op);
    
    switch(op) {
        case '+': printf("%.2f", num1 + num2); break;
        case '-': printf("%.2f", num1 - num2); break;
        case '*': printf("%.2f", num1 * num2); break;
        case '/': 
            if(num2 != 0){
                printf("%.2f", num1 / num2);    
            } else {
                printf("The number cannot be divided by 0.\n");
            }
            break;
        default: printf("Invalid operator value.\n");
    }
    
    return 0;
}