#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // size of L = 2  (23,43)
    int n2 = right - mid;     // size of R = 2  (65,6)

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    // copy into temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // compare front elements, pick smaller
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];  // 23 picked, then 43
        else
            arr[k++] = R[j++];  // 6 picked first
    }

    // leftover copy — this is where 65 lands without comparison
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);      // go left first → [23,43]
        merge_sort(arr, mid + 1, right); // then right    → [6,65]
        merge(arr, left, mid, right);    // merge back    → [6,23,43,65]
    }
}

int main() {
    int arr[] = {23, 43, 65, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    merge_sort(arr, 0, n - 1);

    printf("\nAfter:  ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

**Output:**
```
Before: 23 43 65 6
After:  6 23 43 65
```

The merge steps exactly as you traced them:
```
merge(0,0,1) → L=[23]  R=[43] → 23<43          → [23,43]
merge(2,2,3) → L=[65]  R=[6]  → 6<65           → [6,65]
merge(0,1,3) → L=[23,43] R=[6,65] → 6,23,43,65 → [6,23,43,65]