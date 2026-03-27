//Write a C program to check whether a number is Armstrong number or not
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>
#include <math.h>

int main() {
    int originalNum,num,remainder,digits=0;
    double result=0.0;

    printf("Enter an integer: ");
    scanf("%d",&num);

    originalNum=num;

    // First loop: store the number of digits of num in 'digits'
    for (originalNum=num;originalNum!=0;++digits) {
        originalNum/=10;
    }

    originalNum=num;

    // Second loop: calculate the Armstrong sum
    while (originalNum!=0) {
        remainder=originalNum%10;
        // pow() returns a double, so we add it to a double result
        result+=pow(remainder,digits);
        originalNum/=10;
    }

    // Check if the calculated result matches the original number
    if ((int)result==num) {
        printf("%d is an Armstrong number.\n",num);
    } else {
        printf("%d is not an Armstrong number.\n",num);
    }

    return 0;
}