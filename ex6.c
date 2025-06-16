#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int input;

    printf("Nhap phan tu can tim")
    scanf("%d", &input);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == input) {
            count++;
        }
    }
}
// do phuc tap khong gian la O(1) con thoi gian la O(n)