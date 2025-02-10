#include <stdio.h>
int main(){
char ch;
printf("");
scanf("%c",&ch);

if('A'<=ch<='Z'){
    printf("Uppercase");
}
if('a'<=ch<='z'){
    printf("Lowercase");
}
else{
    printf("Not an alphabet");
}
    
    return 0;
}