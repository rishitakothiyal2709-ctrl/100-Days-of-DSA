#include <stdio.h>

int main() {
    int p, q, i, j, k;

    int a[100], b[100], c[200];

    // Input size of first log
    scanf("%d", &p);

    // Input elements of first log
    for(i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second log
    scanf("%d", &q);

    // Input elements of second log
    for(i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    i = 0;  // pointer for a
    j = 0;  // pointer for b
    k = 0;  // pointer for merged array

    // Merge both arrays
    while(i < p && j < q) {
        if(a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of a[]
    while(i < p) {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of b[]
    while(j < q) {
        c[k] = b[j];
        j++;
        k++;
    }

    // Print merged log
    for(i = 0; i < p + q; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
