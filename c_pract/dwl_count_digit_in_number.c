#include<stdio.h>
int main(){
    int n , count = 0, rem;
    printf("enter any number : ");
    scanf("%d",&n);
    do{
        n/=10;
        count++;
    }while(n>0);
    printf("Number of digits = %d", count);
    return 0;
}