#include <stdio.h>

int main() {
    char name[400],hobby[400];
    int age;
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}