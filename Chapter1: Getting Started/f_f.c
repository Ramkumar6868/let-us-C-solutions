#include <stdio.h>

int main()
{
    int l, b, tmp;
    l = 1189;
    b = 841;

    printf("A0: %dmm * %dmm\n", l, b);
    
    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A1: %dmm * %dmm\n", l, b);
    
    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A2: %dmm * %dmm\n", l, b);
    
    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A3: %dmm * %dmm\n", l, b);
    
    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A4: %dmm * %dmm\n", l, b);

    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A5: %dmm * %dmm\n", l, b);

    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A6: %dmm * %dmm\n", l, b);

    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A7: %dmm * %dmm\n", l, b);

    tmp = l;
    l = b;
    b = tmp / 2;
    printf("A8: %dmm * %dmm\n", l, b);


    return 0;
}