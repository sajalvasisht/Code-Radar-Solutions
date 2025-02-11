#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x[500],y[600];
    scanf("%c %c",&x,&y);
    printf("You entered: %c and %c",x,y);
    return 0;
}