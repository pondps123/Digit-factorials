#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double factorial(int x)
{
    long double y = 1;
    while (x > 1)
    {
        y *= x;
        x--;
    }
    return y;
}
int digits(double x)
{
    long long int z;
    int y = 0;
    while (x >= 10)
    {
        z = x / 10;
        y += factorial(x - (z * 10));
        x /= 10;
    }
    y += factorial(x);
    return y;
}
int main()
{
    int a=100000000,b = 1,c = 0;
    printf("the sum of all numbers which are equal to the sum of the factorial of their digits\n");
    //scanf("%d", &a);
    while (b<=a)
    {
        if (digits(b)==b && b!=1 && b!=2)
        {
            printf("%d ", b);
            c += b;
        }
        b++;
    }
    printf("\nis %d", c);
    return 0;
}