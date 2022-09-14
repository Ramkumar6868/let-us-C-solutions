#include <stdio.h>

int main()
{
    float km, m, ft, in, cm;

    printf("Enter distance between cities in KM: ");
    scanf("%f", &km);
    
    m = km * 1000;
    ft = m * 3.28;
    in = ft * 12;
    cm = m * 100;

    printf(" Distance between citeis as: \n");
    printf("in kilometers: %.2f\n", km);
    printf("in meters: %.2f\n", m);
    printf("in feet: %f\n", ft);
    printf("in inches: %f\n", in);
    printf("in centimeters: %f\n", cm);

    return 0;
}