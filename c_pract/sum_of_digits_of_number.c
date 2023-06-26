#include<stdio.h>
int main(){
    int a = 0, sum = 0, rem;
    printf("ENTER A NUMBER : ");
    scanf("%d",&a);
    while(a>0){
        rem=a%10;   //taking last digit of a
        sum+=rem;
        a/=10;  //skipping last digit of a

    }
    printf("SUM OF DIGITS = %d\n", sum);
    return 0;
}