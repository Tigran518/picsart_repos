#include <stdio.h>
#define SIZE 100

int compute_count(unsigned long long num);
unsigned long long reverse_num(unsigned long long num);
int is_palindrome(unsigned long long num);

int main(){
    unsigned long long num = 0;

    do
    {
        printf("Enter the number: ");
        scanf(" %llu", &num);
    } while (num > 10000 || num == 196);

    printf("\nCount = %d\n", compute_count(num));
    
    return 0;
}

int compute_count(unsigned long long num){
    int count = 0;

    if (is_palindrome(num))
        return count;
    
    unsigned long long rev = reverse_num(num);
    unsigned long long sum = num + rev;
    count++;
    printf("Step %d: %llu + %llu = %llu\n", count, num, rev, sum);

    unsigned long long old_sum;
    while (!is_palindrome(sum)){
        count++;
        old_sum = sum;
        sum += reverse_num(sum);
        printf("Step %d: %llu + %llu = %llu\n", count, old_sum, reverse_num(old_sum), sum);
    }

    printf("Palindrome found: %llu\n", sum);

    return count;
}

unsigned long long reverse_num(unsigned long long num){
    unsigned long long rev_num = 0;
    while (num != 0){
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}

int is_palindrome(unsigned long long num){
    int digits[SIZE];
    int count = 0;

    while (num != 0){
        digits[count++] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < count / 2; i++){
        if (digits[i] != digits[count - i - 1])
            return 0;
    }
    return 1;
}
