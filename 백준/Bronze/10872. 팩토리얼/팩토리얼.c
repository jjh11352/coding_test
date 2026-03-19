#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

long long fact(int n){
    if(n==1||n==0)
        return 1;
    else
        return n * fact(n-1);
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%lld",fact(num));
    return 0;
}
