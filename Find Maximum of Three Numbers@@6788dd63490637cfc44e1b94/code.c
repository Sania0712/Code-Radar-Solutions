#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3){
        printf("%d",n1);
    }
    if(n2>n1 && n2>n3){
        printf("%d",n2);
    }
    if(n3>n2 && n3>n1){
        printf("%d",n3);
    }
    if((n1==n2) || (n2==n3)){
        printf("%d",n1);
    }
    return 0;
}