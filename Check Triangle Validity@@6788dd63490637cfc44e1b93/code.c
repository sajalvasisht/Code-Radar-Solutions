#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scan("%d %d %d",&a,&b,&c);
    if(a+b>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}