
        #include <stdio.h>

        int main(void) {
            const char *path = "sample.txt";
            FILE *f = fopen(path, "w");
            if (!f) { perror("fopen write"); return 1; }
            fprintf(f, "line one
line two
");
            fclose(f);

            f = fopen(path, "r");
            if (!f) { perror("fopen read"); return 1; }
            char buf[64];
            while (fgets(buf, sizeof buf, f)) {
                printf("%s", buf);
            }
            fclose(f);
            return 0;
        }
