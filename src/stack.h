int *stack_make(int sz);

int *stack_push(int *stack, int operand);
int *stack_pop(int *stack);

int stack_tpop(int *stack);
int stack_top(int *stack);
int stack_size(int *stack);

int *stack_empty(int *stack);
void stack_free(int *stack);
