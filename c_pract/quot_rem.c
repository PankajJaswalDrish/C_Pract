#include<stdio.h>
#include<conio.h>

int x,y,quot,rem;

int main(){
    printf(" Enter two numbers : ");
    scanf("%d%d",&x,&y);
    if(y){
        quot = x/y;
        rem = x%y;
        printf("quotient = %d, Remainder = %d \n",quot,rem);
    }
    else{
        printf("Divide by Zero is error");
    }
}