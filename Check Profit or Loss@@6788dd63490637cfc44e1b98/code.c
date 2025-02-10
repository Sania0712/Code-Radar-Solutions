#include <stdio.h>
int main(){
    int cp,sp;
    printf("");
    scanf("%d%d",&cp,&sp);

    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(cp==sp){
        printf("No Profit No Loss");
    }

    return 0;
}