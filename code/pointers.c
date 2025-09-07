
        #include <stdio.h>

        void inc(int *p) { (*p)++; }

        int main(void) {
            int x = 10; inc(&x);
            printf("x=%d
", x);
            return 0;
        }
