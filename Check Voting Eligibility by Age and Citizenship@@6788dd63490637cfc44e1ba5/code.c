#include <stdio.h>
int main(){
    int age,citizen;
    printf("");
    scanf("%d%d",&age,&citizen);

    if((age>=18)&&(citizen=1)){
        printf("Eligible");
    }
    if(age<18){
        printf("Not Eligible");
    }
    return 0;
}