#include <stdio.h>
long long r[45]={0},i=2;
long long f(n){
    r[1]=1;
    for(i;i<=n;i++)
        r[i]=r[i-1]+r[i-2];
    return r[n];
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",f(n));
}
