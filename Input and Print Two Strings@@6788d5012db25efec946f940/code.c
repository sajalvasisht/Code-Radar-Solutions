#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[500];
    fgets(a,sizeof(a),stdin);
    printf("You entered: %s",a);
    return 0;
}