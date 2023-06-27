#include<stdio.h>
int main(){
    int n,rem,prod=1;
    printf("Enter a number of your choice : ");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        prod*= rem;    //Taking last digit of n
        n/=10;          //skipping last digit of n
    }
    printf("Product of Digits = %d",prod);
    return 0;
}