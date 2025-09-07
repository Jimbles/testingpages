
        #include <stdio.h>

        int main(void) {
            int a[4] = {10,20,30,40};
            int *p = a; // points to a[0]
            printf("*p=%d, *(p+2)=%d
", *p, *(p+2));
            p++; // now points to a[1]
            printf("after p++, *p=%d
", *p);
            return 0;
        }
