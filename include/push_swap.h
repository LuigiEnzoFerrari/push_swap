/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 05:53:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/08/31 06:53:22 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <libft.h>
# include <libqueue.h>

void	swap(t_node **lst);
void	rotate(t_node **lst);
void	reverse_rotate(t_node **lst);

#endif