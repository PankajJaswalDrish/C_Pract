#include<stdio.h>
int main (void){
    int n,num;
    long fact = 1;
    printf("Enter a Number of Your Choice = ");
    scanf("%d",&n);
    num = n;
        while (n>1){
            fact*= n;
            n--;
        }
        printf("Factorial of Given Number %d = %d",num,fact);
    return 0;
}
/******************************USING IF-ELSE **********************************************************/
// #include<stdio.h>
// int main (void){
//     int n,num;
//     long fact = 1;
//     printf("Enter a Number of Your Choice = ");
//     scanf("%d",&n);
//     num = n;
//     if(n<0){
//         printf("No Factorial for Negative number \n");
//     }
//     else{
//         while (n>1){
//             fact*= n;
//             n--;
//         }
//         printf("Factorial of Given Number %d = %d",num,fact);
//     }

//     return 0;
// }