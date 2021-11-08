/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:22:40 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/08 10:22:41 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_values(int *n1, int *n2)
{
	int	temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

t_node	*bubblesort(t_node *lst)
{
	t_node	*lst_cpy;
	t_node	*lst_ptr;
	size_t	lst_size1;
	size_t	index;

	lst_cpy = lstDuplicate(lst);
	lst_ptr = lst_cpy;
	lst_size1 = lstSize(lst);
	index = 0;
	while (lst_size1--)
	{
		while (index < lst_size1)
		{
			if (lst_ptr->data > lst_ptr->next->data)
				swap_values(&lst_ptr->data, &lst_ptr->next->data);
			lst_ptr = lst_ptr->next;
			index++;
		}
		index = 0;
		lst_ptr = lst_cpy;
	}
	return (lst_cpy);
}

t_node	*bubblesort_reverse(t_node *lst)
{
	t_node	*lst_cpy;
	t_node	*lst_ptr;
	size_t	lst_size1;
	size_t	index;

	lst_cpy = lstDuplicate(lst);
	lst_ptr = lst_cpy;
	lst_size1 = lstSize(lst);
	index = 0;
	while (lst_size1--)
	{
		while (index < lst_size1)
		{
			if (lst_ptr->data < lst_ptr->next->data)
				swap_values(&lst_ptr->data, &lst_ptr->next->data);
			lst_ptr = lst_ptr->next;
			index++;
		}
		index = 0;
		lst_ptr = lst_cpy;
	}
	return (lst_cpy);
}
