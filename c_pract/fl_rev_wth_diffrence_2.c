#include<stdio.h>
int main()
{
    int a = 0;
    printf("Enter value revese till Zero : ");
    scanf("%d",&a);
    while(a >= 2){
        printf(" Condition Is TRUE : %d \n", a);
        a = a-2;
    }
    printf("CONDITION FALSE : %d \n",a);
    return 0;
}