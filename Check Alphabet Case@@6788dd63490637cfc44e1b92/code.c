#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a>="A" && a<="Z"){
        printf("Uppercase");
    }
    else(a>="a" && a<="z"){
        printf("Lowercase");
    }

    return 0;
}