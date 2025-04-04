#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, num = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == num) {
            index++;  
        } else {
            missingCount++;
        }
        if (missingCount < k)
            num++;
    }

    return num;
}

