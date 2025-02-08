#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if(n>0){
        printf("POSITIVE");
    }
    if(n<0){
        printf("NEGATIVE");
    }
    if(n==0){
        printf("ZERO");
    }
    return 0;
}