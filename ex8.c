#include <stdio.h>
void main(void) {
    int arr[] = {1,2,1,4,5,2,3,2};
    int maxCount = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int Item;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            Item = arr[i];
        }
    }
  printf("phan tu lon nhat la : %d", Item);
  }
  // do phuc tap la O(n^2)