#include <liblist.h>

/*
** Verify if the actual node or the next node is a NULL node
** if it's NULL return 1
*/

int	is_next_empty(t_node *lst)
{
	return (lst == NULL || lst->next == NULL);
}

/*
** Swap the first two nodes of the given linked list
*/

int	swap(t_node **lst)
{
	t_node	*node;

	if (is_next_empty(*lst))
		return (-1);
	node = *lst;
	(*lst) = (*lst)->next;
	node->next = (*lst)->next;
	(*lst)->next = node;
	return (0);
}

/*
** Puts the first node of the linked list as the last node on the list.
*/

int	rotate(t_node **lst)
{
	t_node	*node;

	if (is_next_empty(*lst))
		return (-1);
	node = (*lst);
	(*lst) = (*lst)->next;
	node->next = NULL;
	node_last((*lst))->next = node;
	return (0);
}

/*
** Puts the last node of the linked list as the first node on the list.
*/

int	reverse_rotate(t_node **lst)
{
	t_node	*node;
	t_node	*last;

	if (is_next_empty(*lst))
		return (-1);
	node = (*lst);
	last = node;
	(*lst) = node_last((*lst));
	while (last->next->next != NULL)
		last = last->next;
	(*lst)->next = node;
	last->next = NULL;
	return (0);
}

/*
** Push the first node of the linked list src,
** as the first node of the linked list dst.
*/

int	push(t_node **dst, t_node **src)
{
	t_node	*node;

	if ((*src) == NULL)
		return (-1);
	node = (*src);
	(*src) = (*src)->next;
	node->next = (*dst);
	(*dst) = node;
	return (0);
}
