// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int j, key;
    int a[5] = {10, 40, 30, 20, 50};

    for (int i = 0; i < 5 - 1; i++) {
        // Only start moving back if current element is greater than next
        if (a[i] > a[i + 1]) {
            j = i;         // Start checking from the current sorted index
            key = a[i + 1]; // This is the element to be moved back

            while (j >= 0) {
                if (a[j] > key) { // Check if element on left is greater
                    a[j + 1] = a[j]; // Shift element to the right
                    j--;
                } else {
                    break; // Correct spot found, stop loop
                }
            }
            a[j + 1] = key; // Put the element in its correct place
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}