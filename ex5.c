#include <stdio.h>
int main() {
    int arr[] = {1,3,2,4,9,0,6,4,8,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

}
// do phuc tap cua khong gian la O(1) va thoi gian la O(n2)