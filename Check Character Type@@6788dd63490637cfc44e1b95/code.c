#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c", &ch);
    
    // Check if it is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Check if it is a vowel (both uppercase and lowercase)
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    }
    // Check if it is an alphabet (and not a vowel, making it a consonant)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
 
    else {
        printf("Special Character");
    }
    
    

    return 0;
}