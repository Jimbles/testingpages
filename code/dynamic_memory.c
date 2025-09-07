
        #include <stdio.h>
        #include <stdlib.h>

        int main(void) {
            int n = 5;
            int *a = malloc(n * sizeof *a);
            if (!a) { perror("malloc"); return 1; }
            for (int i = 0; i < n; i++) a[i] = i*i;
            for (int i = 0; i < n; i++) printf("%d ", a[i]);
            printf("
");
            free(a);
            return 0;
        }
