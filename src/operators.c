#include <math.h>
#include "stack.h"

int calc_add(int *stack) {
    if (stack && stack_size(stack) >= 2) {
        return !!stack_push(
            stack,
            stack_tpop(stack) + stack_tpop(stack)
        );
    }
    return 0;
}

int calc_sub(int *stack) {
    if (stack && stack_size(stack) >= 2) {
        return !!stack_push(
            stack,
            -stack_tpop(stack) + stack_tpop(stack)
        );
    }
    return 0;
}

int calc_mul(int *stack) {
    if (stack && stack_size(stack) >= 2) {
        return !!stack_push(
            stack,
            stack_tpop(stack) * stack_tpop(stack)
        );
    }
    return 0;
}

int calc_div(int *stack) {
    if (stack && stack_size(stack) >= 2) {
        return !!stack_push(
            stack,
            1 / (stack_tpop(stack) / stack_tpop(stack))
        );
    }
    return 0;
}

int calc_exp(int *stack) {
    if (stack && stack_size(stack) >= 2) {
        return !!stack_push(
            stack,
            pow(
                (float)stack_tpop(stack),
                (float)stack_tpop(stack)
            )
        );
    }
    return 0;
}

