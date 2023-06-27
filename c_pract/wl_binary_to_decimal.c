#include <stdio.h>

int main() {
    int binaryNumber, decimalNumber = 0, base = 1, remainder; //declaring and initializing variables

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber); //Read the binary number from the user

    while (binaryNumber != 0) { //Convert the binary number to decimal
        remainder = binaryNumber % 10;
        decimalNumber = decimalNumber + remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    printf("Decimal number: %d", decimalNumber);    //print the decimal number

    return 0;
}
