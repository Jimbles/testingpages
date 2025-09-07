#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    printf("for-sum: %d\n", sum);

    int j = 5;
    while (j > 0) {
        printf("while: j=%d\n", j);
        j--;
    }
    return 0;
}
