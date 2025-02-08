#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if(n>0){
        printf("Positive");
    }
    if(n<0){
        printf("Negative");
    }
    if(n==0){
        printf("Zero");
    }
    return 0;
}