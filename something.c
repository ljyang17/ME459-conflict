#include <stdio.h>

#define N 8

int main(int argc, char* argv[]) {
    printf("Hello world!\n");

    for (size_t i = 0; i < N; i++) {
        printf("%zu ", i+2);
    }
    printf("\n");

    int acc = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2) {
            acc += i;
        }
        else {
            acc -= i;
        }
    }

    printf("acc: %d\n", acc);

    return 0;
}
