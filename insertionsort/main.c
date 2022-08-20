#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, buf, j, k;

    for (i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            buf = arr[i];
            j = 0;
            while (arr[j] < buf) {
                j++;
            }
            k = i;
            while (k > j) {
                arr[k] = arr[k - 1];
                k--;
            }
            arr[j] = buf;
        }
    }
}

int main() {
    int size, i;
    int arr[1000];
    scanf("%d", &size);
    if (size > 1000 || size < 0) {
        return -1;
    }
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, size);
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}