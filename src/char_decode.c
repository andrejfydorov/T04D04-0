#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode() {
    printf("Введите: ");
    char c;
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            continue;
        }

        printf("%x ", c);
    }
}

void decode() {
    printf("Введите: ");

    char a = getchar();
    char b = getchar();
    char c = getchar();

    if ((a >= 0 && a <= 9) && ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z') || (a >= 0 && a <= 9)) &&
        (c == ' ' || c == '\n')) {
        if (c == '\n') {
            return;
        } else {
            a = getchar();
            b = getchar();
            c = getchar();
        }

    } else {
        printf("n/a");
        return;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Вы забыли ввести свое аргументы.\n");
        exit(1);
    }

    if (argv[1] == 0) {
        encode();
    }

    if (argv[1] == 1) {
        decode();
    }

    return 0;
}