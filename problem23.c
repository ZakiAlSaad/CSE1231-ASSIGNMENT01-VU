//Write a C program to check whether a number is palindrome or not
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int n,originalNum,reverse=0,remainder;

    printf("Enter an integer: ");
    scanf("%d",&n);

    originalNum=n;

    while (n!=0) {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }

    if (originalNum==reverse) {
        printf("%d is a palindrome.\n",originalNum);
    } else {
        printf("%d is not a palindrome.\n",originalNum);
    }

    return 0;
}