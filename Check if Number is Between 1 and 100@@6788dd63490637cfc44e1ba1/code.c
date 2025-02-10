#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if((1<=n)&&(n<=100)){
        printf("In Range");
    }
    if((n==0)&&(n>100)){
        printf("Out of Range");
    }
    return 0;
}