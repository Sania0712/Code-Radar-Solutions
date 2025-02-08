#include <stdio.h>
int main(){
    char ch;
    printf("");
    scanf("%c",&ch);

    if((ch>='a')&&(ch<='z')){
        printf("Lowercase");
    }
    if((ch>='A')&&(ch<='Z')){
        printf("Uppercase");
    }
    else(ch>=0){
        printf("Not an alphabet");
    }
    return 0;
}