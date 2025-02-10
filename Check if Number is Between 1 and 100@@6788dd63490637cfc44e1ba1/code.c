#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if(1<=n<=100){
        printf("In Range");
    }
    if(n=0){
        printf("Out of Range");
    }
    return 0;
}