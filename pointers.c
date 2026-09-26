#include <stdio.h>

int main(void) {
    int distance = 42;
    int *pointer = &distance;
    *pointer = 99;

    printf("Value: %d\n", distance);
    printf("Through pointer: %d\n", *pointer);
    printf("New value: %d\n", distance);

    return 0;
}