//Input the value of n, then solve the series: $1+1/3+1/5+.....+1/(2n-1)
// Created by Zaki Al Saad on 26/03/26
#include <stdio.h>

int main() {
    int n;
    double sum=0.0;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        double term=2*i-1;
        sum+=1.0/term;
    }
    
    printf("Sum of the series = %lf\n",sum);
    return 0;
}