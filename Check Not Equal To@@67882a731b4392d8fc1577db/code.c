#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,c;
    scanf("%d %d",&a,&c);
    if(a!=c){
        printf("True");

    }
    else{
        printf("False");
    }
    return 0;
}