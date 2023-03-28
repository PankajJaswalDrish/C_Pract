#include<stdio.h>
#include<conio.h>

int First_number, Second_number;

int main(){
printf("Enter first number ");
scanf("%d",&First_number);
printf("Enter second number ");
scanf("%d",&Second_number);

if (First_number>Second_number){
    printf("First_number is greater %d",First_number);
}
else{
    printf("Second_number is greater %d",Second_number);
}


}