#include <stdio.h>

int main() {
    int n, a[100], k;
    int i, comparisons = 0, position = -1;

    // Read size
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read key
    scanf("%d", &k);

    // Linear Search
for(i = 0; i < n; i++) {
        comparisons++;   // count every comparison

        if(a[i] == k) {
            position = i + 1;  // 1-based position
            break;
        }
    }

    if(position != -1)
        printf("Element found at position %d\n", position);
    else
        printf("Element not found\n");

    printf("Total comparisons = %d\n", comparisons);

    return 0;
}