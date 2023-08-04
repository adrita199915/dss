#include<stdio.h>
int main() {
    int x = 10, y = 7;
    if (x != 0) {
        printf("%d", x - y);
        if (x % y != 0) {
            x = ++y;
            printf("%d", y);
            if ((x + y) == x) {
                printf("%d", x--);
            }
        } else {
            printf("%d", --y);
        }
    } else {
        printf("%d", x + y);
    }

    return 0;
}
