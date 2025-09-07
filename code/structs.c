
        #include <stdio.h>
        #include <string.h>

        struct Student { char name[32]; int age; float gpa; };

        void print_student(const struct Student *s) {
            printf("%s, %d, GPA=%.2f
", s->name, s->age, s->gpa);
        }

        int main(void) {
            struct Student s = {"Grace", 20, 3.9f};
            print_student(&s);
            struct Student t; strcpy(t.name, "Alan"); t.age = 19; t.gpa = 3.7f;
            print_student(&t);
            return 0;
        }
