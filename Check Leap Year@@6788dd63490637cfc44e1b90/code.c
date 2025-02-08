#include <stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);

    if(n%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}