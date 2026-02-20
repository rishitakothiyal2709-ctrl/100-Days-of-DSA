#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    // Input string
    scanf("%s", str);

    length = strlen(str);

    // Reverse and print
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
