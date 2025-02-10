#include <stdio.h>
int main(){
    int n1,n2;
    printf("");
    scanf("%d%d",&n1,&n2);

    if(n1==n2){
        printf("Equal");
    }
    if(n1>n2){
        printf("First");
    }
    if(n2>n1){
        printf("Second");
    }
}