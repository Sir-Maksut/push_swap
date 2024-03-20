/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:04:12 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/07 12:45:06 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_free(t_stack *stack)
{
	int	i;

	i = 0;
	free(stack->a);
	free(stack->b);
	if (stack->number)
	{
		while (stack->number[i])
		{
			free(stack->number[i]);
			i++;
		}
		free(stack->number);
	}
	free(stack);
	write(2, "Error\n", 6);
	exit(1);
}
