#include <stdio.h>
int main(){
    char c;
    printf("");
    scanf("%c",&c);

    if('a'<=c<='z'){
        printf("Lowercase");
    }
    if('A'<=c<='Z'){
        printf("Uppercase");
    }
    return 0;
}