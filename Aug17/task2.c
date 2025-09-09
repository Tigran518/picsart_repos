#include <stdio.h>

typedef enum {
    MONDAY=1, 
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY, 
    FRIDAY, 
    SATURDAY, 
    SUNDAY
} Day;

int main()
{
    Day d = MONDAY;
    
    if (d == SATURDAY || d == SUNDAY){
        printf("Weekend\n");
    } else {
        printf("Weekday\n");
    }
    
    return 0;
}