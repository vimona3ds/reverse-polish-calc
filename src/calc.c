#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stack.h"
#include "operators.h"

int calc(const char *str) {
    int *stack = stack_make(0xFF);

    for (size_t i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            stack_push(stack, str[i] - 0x30);
        } else {
            switch (str[i]) {
            case '+':
                calc_add(stack);
                break;
            case '-':
                calc_sub(stack);
                break;
            case '*':
                calc_mul(stack);
                break;
            case '/':
                calc_div(stack);
                break;
            case '^':
                calc_div(stack);
                break;
            default:
                break;
            }
        }
    }

    printf("%d\n", stack_tpop(stack));
    stack_free(stack);

    return 0;
}

void help() {
    printf(
        "Usage:\n"
        "\t./calc \"expression\"\tfor a single expression calculation\n"
        "\t./calc\t\t\tfor command line interface\n"
    );
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("terminal soon\n");
    } else if (argc == 2) {
        return calc(argv[1]);
    } else {
        help();
    }
    return 1;
}
