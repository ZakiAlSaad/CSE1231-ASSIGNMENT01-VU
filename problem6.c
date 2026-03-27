//Input the value of n, then solve the series: $1+3+5+......+(2n-1)$
// Created by Zaki Al Saad on 26/03/26
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        sum+=(2*i-1);
    }
    
    printf("Sum of the series = %d\n",sum);
    return 0;
}