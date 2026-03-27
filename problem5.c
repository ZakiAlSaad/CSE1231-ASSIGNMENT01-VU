//Take an integer number from keyboard and print its multiplication table
// Created by Zaki Al Saad on 25/03/26
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    printf("Multiplication table for %d:\n",num);
    for(int i=1;i<=10;i++) {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    
    return 0;
}