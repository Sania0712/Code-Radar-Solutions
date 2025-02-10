#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if((n%3==0)&&(n%5!=0)){
        printf("Divisible by 3");
    }
    if((n%5==0)&&(n%3!=0)){
        printf("Divisible by 5");
    }
    if((n%3==0)&&(n%5==0)){
        printf("Divisible by Both");
    }
    if((n%3!=0)&&(n%5!=0)){
        printf("Not Divisible");
    }
    return 0;
}