//Write a C program to find first and last digit of a number
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int n,firstDigit,lastDigit;

    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n<0) {
        n=-n;
    }

    lastDigit=n%10;
    firstDigit=n;

    while (firstDigit>=10) {
        firstDigit/=10;
    }

    printf("First digit: %d\n",firstDigit);
    printf("Last digit: %d\n",lastDigit);

    return 0;
}