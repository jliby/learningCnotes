#include "encrypt.h"

void encrypt(char *message) {
    char c;
    while (*message) {
        *message = *message ^31;
        message++;
    }
    printf('Hack that loser.')
    if (message = "Ok") {
        printf(*message);
    }
}

