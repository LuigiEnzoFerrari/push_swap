/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstPrint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:08:27 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/11/10 03:45:11 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libqueue.h>
#include <stdio.h>

static void	pchar(char c)
{
	write(1, &c, 1);
}

static void	putnbr(int nb)
{
	long int	num;

	num = nb;
	if (nb < 0)
	{
		pchar('-');
		num = -num;
	}
	if (num >= 10)
		putnbr(num / 10);
	pchar((num % 10) + '0');
}

/*
** Print on stdout all the data values on the lst, each one followed
** by a endline.
*/

void	lstPrint(t_node *lst, int c)
{
	while (lst != NULL)
	{
		putnbr(lst->data);
		lst = lst->next;
		if (lst != NULL)
			pchar(c);
	}
	pchar('\n');
}
