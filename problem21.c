//Write a C program to calculate product of digits of a number
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    long long n;
    long long product=1;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld",&n);

    // If the number is 0, the product of its digits is 0
    if (n==0) {
        product=0;
    } else {
        if (n<0) {
            n=-n;
        }
        while (n!=0) {
            remainder=n%10;
            product*=remainder;
            n/=10;
        }
    }

    printf("Product of digits =%lld\n",product);
    return 0;
}