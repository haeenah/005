#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;

    printf("enter the calculation : ");
    scanf("%d%c%d", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d\n", num1 % num2);
            }
            break;
    }

    return 0;
}