#include <stdlib.h>

/*
 * Create signed int stack from given size in ints
 *
 * int *stack = stack_make(0xff, 0);
 *
 * time: O(sz) space: O(sz)
 */
int *stack_make(int sz) {
    // allocate size + 1 to store stack_top
    int *stack = (int *)calloc(sz + 1, sizeof(int));
    return stack;
}

/*
 * Pushes int onto stack
 *
 * printf("%d",
 *  stack_top(stack_push(stack, 1234))
 * );
 *
 * time: O(1) space: O(1)
 */
int *stack_push(int *stack, int value) {
    stack[++*stack] = value;
    return stack;
}

/*
 * Pop top int on stack
 * 
 * printf("%d",
 *  stack_top(stack_pop(stack))
 * );
 *
 * time: O(1) space: O(1)
 */
int *stack_pop(int *stack) {
    if (*stack)
        stack[(*stack)--] = 0;
    return stack;
}

/*
 * Gets top value of stack
 * printf("%d", stack_top(stack_push(stack_make(0xff), 1234)));
 */
int stack_top(int *stack) {
    return stack[*stack];
}

/*
 * Returns popped top int on stack
 * 
 * printf("%d",
 *  stack_tpop(stack)
 * );
 *
 * time: O(1) space: O(1)
 */
int stack_tpop(int *stack) {
    int top = stack_top(stack);
    stack_pop(stack);
    return top;
}

/*
 * Returns amount of values in stack
 *
 * printf("%d", stack_size(stack));
 *
 * time: O(1) space: O(1)
 */
int stack_size(int *stack) {
    return *stack;
}

/*
 * Empties stack
 *
 * printf("%d",
 *  stack_top(
 *   stack_empty(
 *    stack_push(stack, 1234)
 *   )
 *  )
 * );
 *
 * time: O(sz) space: O(1)
 */
int *stack_empty(int *stack) {
    if (*stack)
        for (int i = 0; i < *stack; )
            stack[++i] = 0;
    *stack = 0;
    return stack;
}

/*
 * Frees stack
 *
 * time: O(sz) space: O(-sz) ??
 */
void stack_free(int *stack) {
    *stack = 0;
    free(stack);
}

