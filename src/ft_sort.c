/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:36:33 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/06 16:39:14 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort(t_stack *stack)
{
	if (!(ft_is_sorted(stack)))
	{
		if (stack->size_a == 2)
			sa(stack);
		else if (stack->size_a == 3)
			ft_sort_three(stack);
		else if (stack->size_a < 500)
			ft_start_sort(stack);
		else
			ft_first_seperation(stack, stack->size_a);
	}
}
