#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[500];
    char b[500];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("You entered: %s and %s",a,b);
    return 0;
}