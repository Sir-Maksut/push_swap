/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:00:37 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/02 17:32:15 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_find_max(t_stack *stack)
{
	int	max;
	int	i;

	i = 0;
	max = stack->b[0];
	while (i < stack->size_b)
	{
		if (max < stack->b[i])
			max = stack->b[i];
		i++;
	}
	return (max);
}
