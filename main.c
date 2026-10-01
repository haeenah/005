#include <stdio.h>

int main(void) {
    int num;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("Absolute value is %d.\n", num);

    return 0;
}