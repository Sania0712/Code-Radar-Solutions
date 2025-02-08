#include <stdio.h>
int main(){
    char c;
    printf("%c",&c);
    scanf("%c",&c);

    switch(c){
        case 'A':
        printf("Exelllent");
        break;

        case 'B':
        printf("Exelllent");
        break;

        case 'C':
        printf("Average");
        break;

        case 'D':
        printf("Exelllent");
        break;

        case 'F':
        printf("Fail");
        break;

        default:
        printf("Invalid");
    }
    return ;
}