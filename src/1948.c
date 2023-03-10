/*
Программа
*/

#include <math.h>
#include <stdio.h>

int mod(int a, int b);
int isProstoe(int a);
int simpleNOD(int n);
int isNumber(int n);

int main() {
    int n;
    printf("Введите число");

    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 0;
    }

    n = fabs((float)n);

    printf("%d", simpleNOD(n));

    return 0;
}

int simpleNOD(int n) {
    int p;
    int res = 0;
    for (p = n - 1; p > 0; p--) {
        int m = mod(n, p);
        if (m == 0) {
            if (isProstoe(p) != 0) {
                res = p;
                break;
            }
        }
    }
    return res;
}

int mod(int a, int b) {
    while ((a - b) >= b) {
        a = a - b;
    }
    a = a - b;
    return a;
}

int isProstoe(int a) {
    int i = 0;
    int n = a;
    int res = 1;
    while ((n - i) > 0) {
        a = (n - i);
        if (n > a && a > 1) {
            if (mod(n, a) == 0) {
                res = 0;
                break;
            }
        }
        i++;
    }
    return res;
}