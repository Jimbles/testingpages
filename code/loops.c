
        #include <stdio.h>

        int main(void) {
            int sum = 0;
            for (int i = 1; i <= 5; i++) sum += i;
            printf("for-sum: %d
", sum);

            int j = 3;
            while (j > 0) { printf("j=%d
", j); j--; }
            return 0;
        }
