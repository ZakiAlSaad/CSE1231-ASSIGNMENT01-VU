//Take a number, n from keyboard and print the numbers from 0 to n which are a multiple of another number, x
// Created by Zaki Al Saad on 25/03/26

#include <stdio.h>

int main() {
    int n,x;
    printf("Enter the upper limit (n): ");
    scanf("%d",&n);
    printf("Enter the multiplier (x): ");
    scanf("%d",&x);
    
    printf("Multiples of %d from 0 to %d:\n",x,n);
    for(int i=0;i<=n;i++) {
        if(i%x==0) {
            printf("%d",i);
        }
    }
    printf("\n");
    
    return 0;
}