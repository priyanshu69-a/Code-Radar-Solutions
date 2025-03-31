#include <stdio.h>

int findKthPositive(int arr[], int n, int k) {
    int missingCount = 0, num = 1, index = 0;

    while (missingCount < k) {
        if (index < size && arr[index] == num) {
            index++;  // If num is in the array, move to the next element
        } else {
            missingCount++;  // If num is missing, count it
        }
        if (missingCount < k)
            num++;  // Move to the next number
    }

    return num;
}

