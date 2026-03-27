//The numbers in the sequence: 1 1 2 3 5 8 13 21... is called Fibonacci numbers. Use loop structure to calculate and print the first m Fibonacci numbers
// Created by Zaki Al Saad on 27/03/26
#include <stdio.h>

int main() {
    int m;
    unsigned long long t1=1,t2=1,nextTerm;

    printf("Enter the number of terms (m): ");
    scanf("%d",&m);

    printf("Fibonacci Series: ");

    for (int i=1;i<=m;++i) {
        if (i==1) {
            printf("%llu",t1);
            continue;
        }
        if (i==2) {
            printf("%llu",t2);
            continue;
        }
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        
        printf("%llu",nextTerm);
    }
    printf("\n");

    return 0;
}