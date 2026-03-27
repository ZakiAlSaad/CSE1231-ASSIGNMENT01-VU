//Input the value of n, then solve the series: $1/2^{2}+1/4^{2}+1/6^{2}+......+1/(2n)^{2}
// Created by Zaki Al Saad on 26/03/26
#include <stdio.h>

int main() {
    int n;
    double sum=0.0;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) {
        double term=2*i;
        sum+=1.0/(term*term);
    }
    
    printf("Sum of the series = %lf\n",sum);
    return 0;
}