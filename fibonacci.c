#include <stdio.h>
int main() {
    int i, n=10, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 1; i <= 10; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
