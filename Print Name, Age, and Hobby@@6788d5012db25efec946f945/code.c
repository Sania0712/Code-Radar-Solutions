#include <stdio.h>
int main(){
  char name[10];
  printf("Name: """);
  scanf("%s",&name);
  printf("%s\n",name);


  int age;
  printf("Age: ");
  scanf("%d",&age);
  printf("%d\n",age);

  char hobby[10];
  printf("Hobby: ");
  scanf("%s",&hobby);
  printf("%s\n",hobby);

    return 0;
}