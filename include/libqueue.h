#ifndef LIBQUEUE_H
# define LIBQUEUE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/*
** Node struct of a linked list which has a int value as the data.
*/

struct s_node
{
	int				data;
	struct s_node	*next;
};

typedef struct s_node	t_node;

t_node	*newNode(int data);
t_node	*nodeLast(t_node *lst);

void	insertFront(t_node **lst, int data);
void	insertEnd(t_node **lst, int data);

void	lstFree(t_node *lst);
void	nodeFree(t_node *lst);

void	lstDelete(t_node **lst);
void	nodeDelete(t_node **lst);

void	lstPrint(t_node *lst);

#endif
