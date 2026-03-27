//Find the factorial of a given number, n
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial=1; // Using unsigned long long to hold larger factorial values

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if (n<0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for(int i=1;i<=n;++i) {
            factorial*=i;
        }
        printf("Factorial of %d=%llu\n",n,factorial);
    }

    return 0;
}