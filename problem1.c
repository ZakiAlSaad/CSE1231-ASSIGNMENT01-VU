//Take a number, n from keyboard and print the numbers from 0 to n
// Created by Zaki Al Saad on 25/03/26

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (n):");
    scanf("%d",&n);
    
    printf("Numbers from 0 to %d:\n",n);
    for(int i=0;i<=n;i++) {
        printf("%d",i);
    }
    printf("\n");
    
    return 0;
}