#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1==n2==n3){
        printf("Equilateral");
    }
    if(n1==n2!=n3){
        printf("Isosceles")
    }
    if(n1!=n2!=n3){
        printf("Scalene");
    }
    return 0;
}