//Write a C program to count number of digits in a number
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    long long n;
    int count=0;

    printf("Enter an integer: ");
    scanf("%lld",&n);

    // Handle 0 explicitly as it has 1 digit
    if (n==0) {
        count=1;
    } else {
        while (n!=0) {
            n/=10;
            ++count;
        }
    }

    printf("Number of digits: %d\n",count);

    return 0;
}