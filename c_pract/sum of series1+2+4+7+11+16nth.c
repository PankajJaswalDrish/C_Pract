#include <stdio.h>
int main()
{
    int i, n, sum = 0, term = 1;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        if (sum == 1)
        {
            printf("1st Term is : %d \n ", sum);
        }
        term = term + i;
        if (i != n)
        {
            printf("Terms%d : %d \n ", i+1,term);
        }
    }
    printf("\n");
    printf("Sum of Series up to %d term is %d \n", n, sum);
    return 0;
}

//According to direct math formula of AP
// #include <stdio.h>
// int main()
// {
//     int i, n, sum = 0, term = 1;
//     printf("Enter number of terms : ");
//     scanf("%d", &n);
    
//     sum =((n*n*n) + (5 * n));
//     sum = sum/6;

//     printf("\n");
//     printf("Sum of Series up to %d term is %d \n", n, sum);
//     return 0;
// }