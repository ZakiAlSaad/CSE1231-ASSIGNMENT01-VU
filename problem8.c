//Input the value of n, then solve the series: $1^{2}+3^{2}+5^{2}+......+(2n-1)^{2}
// Created by Zaki Al Saad on 26/03/26
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        int term=2*i-1;
        sum+=(term*term);
    }
    
    printf("Sum of the series = %d\n",sum);
    return 0;
}