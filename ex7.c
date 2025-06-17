#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    // cach 1 do phuc tap ve thoi gian la O(n2) va do phuc tap ve khong gian la O(n)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count = 1;
                break;
            }

        }
    }
    // cach 2 do phuc tap thoi gian la O(n2) va khong gian la O(1)
    for (int i = 0; i < n - 1; i++) {
        for (int j = n + 1; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                count = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = count;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count = 1;
            break;
        }
    }
}
