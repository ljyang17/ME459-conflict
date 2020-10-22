#include <stdio.h>

#define N 8

int main(int argc, char* argv[]) {
    printf("Hello world!\n");

    for (size_t i = 0; i < N; i++) {
        printf("%zu ", i);
    }
    printf("\n");

    return 0;
}
