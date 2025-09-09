#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main()
{
    union Data d;
    d.i = 1;
    printf("%d\n", d.i);
    
    d.f = 2.0;
    printf("%.2f\n", d.f);
    
    d.c = 'A';
    printf("%c\n", d.c);

    return 0;
}