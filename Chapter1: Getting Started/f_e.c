#include <stdio.h>

int main()
{
    int l, b, ar, prm, r;
    float crmf_ar, ar_cr;

    printf("Enter the length and breadth: ");
    scanf("%d%d", &l, &b);

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    ar = l * b;
    prm = 2 * (l + b);
    crmf_ar = 2 * 3.14 * r;
    ar_cr = 2 * 3.14 * r * r;

    printf("Perimeter of rectangle: %d\nArea of rectangle: %d\n", prm, ar);
    printf("Circuference of circle: %.2f\nArea of Circle: %.2f\n", crmf_ar, ar_cr);

    return 0;
}