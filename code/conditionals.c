
        #include <stdio.h>

        int main(void) {
            int x = 2;
            if (x < 0) printf("negative
");
            else if (x == 0) printf("zero
");
            else printf("positive
");

            switch (x) {
                case 0: printf("zero via switch
"); break;
                case 1: printf("one via switch
"); break;
                case 2: printf("two via switch
"); /* fallthrough */
                default: printf("default case
");
            }
            return 0;
        }
