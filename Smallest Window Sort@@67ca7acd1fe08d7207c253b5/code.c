#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int L = -1, R = -1;

    // Find the left boundary (L)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            L = i;
            break;
        }
    }

    // If the array is already sorted
    if (L == -1) return 0;

    // Find the right boundary (R)
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            R = i;
            break;
        }
    }

    // Find the min and max values in the subarray arr[L...R]
    int minVal = arr[L], maxVal = arr[L];
    for (int i = L; i <= R; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Extend L to include any number greater than minVal
    while (L > 0 && arr[L - 1] > minVal) {
        L--;
    }

    // Extend R to include any number smaller than maxVal
    while (R < n - 1 && arr[R + 1] < maxVal) {
        R++;
    }

    return R - L + 1;
}