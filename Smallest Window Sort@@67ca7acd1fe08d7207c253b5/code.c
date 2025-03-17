#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int L = -1, R = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            L = i;
            break;
        }
    }
    if (L == -1) return 0;  // Already sorted

    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            R = i;
            break;
        }
    }
    return R - L + 1;  // Length of subarray
}