// #include <stdio.h>
// int main(){
//     int year;
//     printf("Enter Year : ");
//     scanf("%d",&year);
//     if(year%100 != 0){
//         if (year%4 == 0 )
//         {
//             printf("Entered Year is Leap Year\n");

//         }
//         else{
//             printf("Entered Year is not a Leap year\n");
//         }
//     }
//     else{
//         if (year%400 == 0)
//         {
//             printf("LEAP YEAR \n");
//         }
//         else{
//             printf("NOT A LEAP YEAR \n");
//         }
        
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);
    if(year%100 != 0 && year%4 || year%400 ){
            printf("Entered Year is Leap Year\n");
        }
        else{
            printf("Entered Year is not a Leap year\n");
        }
    return 0;
}