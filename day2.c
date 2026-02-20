#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    // Input size
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input position to delete (1-based)
    scanf("%d", &pos);

    // Check if position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position");
    } else {

        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;  // Reduce size of array

        // Print updated array
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
