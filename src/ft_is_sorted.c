/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:37:58 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/06 12:00:48 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (++i < stack->size_a)
	{
		if (stack->a[i - 1] > stack->a[i])
		{
			return (0);
		}
	}
	return (1);
}

int	ft_is_sorted_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (++i < stack->size_b)
	{
		if (stack->b[i - 1] < stack->b[i])
		{
			return (0);
		}
	}
	return (1);
}
