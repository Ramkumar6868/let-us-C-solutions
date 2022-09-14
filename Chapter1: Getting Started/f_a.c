#include <stdio.h>

int main()
{
    float b, hr, da, s;

    printf("Please enter basic salary for Ramesh: ");
    scanf("%f", &b);

    hr = b * .4;
    da = b * .2;
    s = b + da + hr;

    printf("Ramesh gross salary is: Rs. %f\n", s);
    return 0;
}