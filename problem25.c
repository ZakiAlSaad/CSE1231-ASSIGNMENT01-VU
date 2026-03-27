//Write a C program to check whether a number is Prime number or not
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int n,isPrime=1;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    // 0 and 1 are not prime numbers
    if (n==0 || n==1) {
        isPrime=0;
    } else {
        for (int i=2;i<=n/2;++i) {
            if (n%i==0) {
                isPrime=0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n",n);
    } else {
        printf("%d is not a prime number.\n",n);
    }

    return 0;
}