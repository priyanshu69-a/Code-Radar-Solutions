void findUnsortedSubarray(int arr[], int n) {
    int L = -1, R = -1;

    // Step 1: Find the first element from left that is out of order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            L = i;
            break;
        }
    }

    // If no out-of-order elements are found, array is already sorted
    if (L == -1) {
        printf("The array is already sorted.\n");
        return;
    }

    // Step 2: Find the first element from right that is out of order
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            R = i;
            break;
        }
    }

    // Step 3: Find the min and max in the subarray arr[L..R]
    int minVal = arr[L], maxVal = arr[L];
    for (int i = L; i <= R; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Step 4: Expand L to the left
    for (int i = 0; i < L; i++) {
        if (arr[i] > minVal) {
            L = i;
            break;
        }
    }

    // Step 5: Expand R to the right
    for (int i = n - 1; i > R; i--) {
        if (arr[i] < maxVal) {
            R = i;
            break;
        }
    }

    // Step 6: Print the result
    printf("The smallest subarray that needs to be sorted is from index %d to %d\n", L, R);
}