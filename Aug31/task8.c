#include <stdio.h>

typedef struct 
{
    char name [50];
    int age;
} Person;


int main(){
    Person p;

    printf("Enter person's name: ");
    scanf("%s", p.name);

    do
    {
        printf("Enter person's age: ");
        scanf("%d", &p.age);
    } while (p.age < 0);

    (p.age >= 18) ? printf("Yes, you are an adult.") : printf("You are not an adult.");
    

    return 0;
}