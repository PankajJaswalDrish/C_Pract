#include <stdio.h>
int main()
{
    int a, b, result = 0;
    printf("enter any Two number of choice : ");
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= b; i++)
    {
        result = result + a;
    }
    printf("Product of Given a = %d and b = %d is :  %d", a, b, result);
}