#include <stdio.h>
int z =34;
int main() {
    int x = 23;
    printf("X is stored in %p\n", &x);
    return 0;
}

printf("Z is stored in %p\n", &z);