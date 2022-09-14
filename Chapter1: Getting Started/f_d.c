#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter tempreture in Fahrenheit: ");
    scanf("%f", &f);

    c = ((f-32)*5)/9;
    printf("Temrature in Celcius: %.2f\n", c);

    return 0;
}