#include<stdio.h>
#include<conio.h>

int num;

void check_even_odd(){
    printf("Enter any number to check Even or ODD ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("enter number is even %d ",num);
    }
    else{
        printf("enter number is odd %d ",num);
    }
}

int main(){
    check_even_odd();
    //     printf("Enter any number to check Even or ODD : ");

    //     scanf("%d", &num);
    // if(num%2 == 0){
    //     printf("enter number is even %d ",num);
    // }
    // else{
    //     printf("enter number is odd %d ",num);
    // }
}