
        #include <stdio.h>

        int main(void) {
            int age = 0;
            printf("Enter your age: ");
            if (scanf("%d", &age) == 1) {
                printf("You entered: %d
", age);
            } else {
                printf("Invalid input.
");
            }
            return 0;
        }
