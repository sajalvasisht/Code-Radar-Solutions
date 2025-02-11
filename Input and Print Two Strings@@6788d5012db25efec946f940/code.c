#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[500],y[500];
    scanf("%s %s",&x,&y);
    printf("You entered: %s and %s",x,y);
    return 0;
}