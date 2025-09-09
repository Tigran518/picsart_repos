#include <stdio.h>

typedef enum {
    MALE,
    FEMALE
} Gender;

typedef struct {
    int id;
    int age;
    float grade;
    Gender gender;
} Student;

int main()
{
    Student st;
    
    printf("Enter your id: ");
    scanf("%d", &st.id);
    
    printf("Enter your age: ");
    scanf("%d", &st.age);
    
    printf("Enter your grade: ");
    scanf("%f", &st.grade);
    
    printf("Enter your gender: ");
    scanf("%d", (int*)&st.gender);
    
    if (st.grade >= 10) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}