//Take a number, n from keyboard and print the odd numbers from 1 to n
// Created by Zaki Al Saad on 25/03/26

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (n): ");
    scanf("%d",&n);
    
    printf("Even numbers from 2 to %d:\n", n);
    for(int i=2;i<=n;i+=2) {
        printf("%d",i);
    }
    printf("\n");
    
    return 0;
}