#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, tot;
    float per;

    printf("Enter marks for five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);

    tot = s1 + s2 + s3 + s4 + s5;
    per = tot * 100.0 / 500;

    printf("Total marks: %d\nPercentage: %.2f\n", tot, per);
    
    return 0;
}