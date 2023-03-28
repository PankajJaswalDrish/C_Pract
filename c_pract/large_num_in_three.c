#include<stdio.h>

int num1, num2, num3;

void scan_number(){
    printf("Enter First number : ");
    scanf("%d",&num1);
    printf("Enter Second number : ");
    scanf("%d",&num2);
    printf("Enter Third number : ");
    scanf("%d",&num3);    
}

void print_large_number(){
    if(num1>num2){
        if(num1>num3){
            printf("First Number is Greater");
        }
        else{
            printf("Third Number is Greater");
        }
        
    }
    else {
        if(num2>num3){
        printf("Second Number is Greater");
        }
        else{
            printf("Third Number is Greater");
        }
            
    }
}
int main(){
    scan_number();
    print_large_number();

}