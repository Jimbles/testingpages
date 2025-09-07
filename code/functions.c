
        #include <stdio.h>

        int add(int a, int b); // prototype

        int main(void) {
            printf("add(2,3)=%d
", add(2,3));
            return 0;
        }

        int add(int a, int b) { return a + b; }
