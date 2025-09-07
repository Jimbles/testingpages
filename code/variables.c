#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i = 42;
    float f = 3.14159f;
    double d = 2.718281828;
    char c = 'A';
    bool flag = true;

    printf("int: %d\n", i);
    printf("float: %.5f\n", f);
    printf("double: %.9f\n", d);
    printf("char: %c\n", c);
    printf("bool: %s\n", flag ? "true" : "false");
    return 0;
}
