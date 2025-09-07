
        #include <stdio.h>
        #include <string.h>

        int main(void) {
            char name[16] = "Ada";
            strcat(name, " Lovelace"); // WARNING: unsafe if too long; for teaching only
            printf("Hello, %s (len=%zu)
", name, strlen(name));
            return 0;
        }
