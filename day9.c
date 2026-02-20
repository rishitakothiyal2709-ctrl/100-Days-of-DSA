#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int start = 0, end;

    // Input string
    scanf("%s", s);

    end = strlen(s) - 1;

    // Two-pointer comparison
    while(start < end) {
        if(s[start] != s[end]) {
            printf("Not Palindrome");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome");

    return 0;
}
