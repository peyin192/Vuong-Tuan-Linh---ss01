#include <stdio.h>
int main() {
    void printDouble(int n) {
        int i = 1;
        while (i < n) {
            printf("%d\n", i);
            i *= 2;
        }
    }
}
// do phuc tap la O(log n)