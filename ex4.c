#include <stdio.h>
int main() {
    int sum;
// cach 1
    sum = n * (n - 1) / 2;
    // do phuc tap ca khong gian va tgian la O(1)
// cach 2
    for (int i = 0; i < n; i++) {
        i += sum;
    }
    // do phuc tap khong gian la O(1) con thoi gian la O(n)
}
//