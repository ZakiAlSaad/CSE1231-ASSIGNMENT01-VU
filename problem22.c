//Write a C program to enter a number and print its reverse
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int n,reverse=0,remainder;

    printf("Enter an integer: ");
    scanf("%d",&n);

    while (n!=0) {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }

    printf("Reversed number =%d\n",reverse);
    return 0;
}