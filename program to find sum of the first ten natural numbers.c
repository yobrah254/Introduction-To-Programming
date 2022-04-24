//program to find sum of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int  a, sum = 0;

    printf("The first 10 natural number is :\n");

    for (a = 1; a <= 10; a++)
    {
        sum = sum + a;
        printf("%d ",a);
    }
    printf("\nThe Sum is : %d\n", sum);
}
