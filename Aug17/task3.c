#include <stdio.h>

enum Kind {
    BOOK, 
    BOX
};

union Details{
    int pages;
    float weight;
};

struct Item {
    int code;
    enum Kind k;
    union Details details;
};


int main()
{
    struct Item it1, it2;
    
    it1.code = 1;
    it1.k = BOOK;
    it1.details.pages = 300;
    
    it2.code = 2;
    it2.k = BOX;
    it2.details.weight = 2.5;
    
    if (it2.k == BOOK) {
        printf("Number of pages = %d\n", it1.details.pages);
    } else {
        printf("Weight = %.2f\n", it2.details.weight);
    }
    
    return 0;
}