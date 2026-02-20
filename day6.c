#include <stdio.h>

int main() {
    int n, a[100], i;

    // Input size
    scanf("%d", &n);

    // Input sorted array
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // If array is empty
    if(n == 0) {
        return 0;
    }

    int j = 0;   // Points to last unique element

    // Traverse array
    for(i = 1; i < n; i++) {
        if(a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    // Print unique elements
    for(i = 0; i <= j; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
