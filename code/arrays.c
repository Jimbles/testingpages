
        #include <stdio.h>

        int main(void) {
            int a[5] = {1,2,3,4,5};
            int sum = 0;
            for (int i = 0; i < 5; i++) sum += a[i];
            printf("sum=%d, avg=%.2f
", sum, sum/5.0);
            return 0;
        }
