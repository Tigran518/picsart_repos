#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    int mn = 0;
    int rev_num = 0;
    
    while (num != 0) {
        mn = num % 10;//3,2,1
        num = num / 10;//12,1,0
        rev_num = rev_num * 10 + mn;//3,32,321
    }
    
    printf("Reverse number = %d", rev_num);
    
    return 0;
}