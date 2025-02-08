#include <stdio.h>
int main(){
    char ch;
    printf("");
    scanf("%c",&ch);

    if('a'<=ch<='z'){
        printf("Lowercase");
    }
    if('A'<=ch<='Z'){
        printf("Uppercase");
    }
    return 0;
}