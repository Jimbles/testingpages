#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 42;
    float f = 3.14159f;
    double d = 2.718281828;
    char c = 'A';
    bool flag = true;

    printf("int: %d
", i);
    printf("float: %.5f
", f);
    printf("double: %.9f
", d);
    printf("char: %c
", c);
    printf("bool: %s
", flag ? "true" : "false");
    return 0;
}
