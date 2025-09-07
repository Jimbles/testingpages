
        #include <stdio.h>

        int main(void) {
            int a = 7, b = 3;
            printf("a+b=%d, a-b=%d, a*b=%d, a/b=%d, a%%b=%d
",
                   a+b, a-b, a*b, a/b, a%b);
            printf("a>b=%d, a==b=%d, (a>b)&&(b>0)=%d
",
                   a>b, a==b, (a>b)&&(b>0));
            return 0;
        }
