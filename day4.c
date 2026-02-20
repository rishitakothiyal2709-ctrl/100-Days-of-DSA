#include <stdio.h>

int main() {
    int n, a[100], i;
    int start, end, temp;

    // Input size
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Two-pointer approach
    start = 0;
    end = n - 1;

    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
