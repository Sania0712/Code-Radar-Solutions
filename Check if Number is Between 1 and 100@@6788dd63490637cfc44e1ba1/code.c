#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if(1<=n<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}