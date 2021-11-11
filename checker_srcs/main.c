#include <push_swap.h>

int main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	argc = (int)argc;
	stack_a = NULL;
	stack_b = NULL;
	argv++;
	if (*argv == NULL)
		return (0);
	if (checker_args(&argv))
		return (print_error());
	if (init_stack_a(&stack_a, argv))
		return (print_error());
	lstFree(stack_a);
	lstFree(stack_b);
}