#include <stdio.h>

void mergeSort(int arr[], int size) {

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
    mergeSort(arr, size);
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
