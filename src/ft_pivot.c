/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:14 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/06 14:17:51 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

int	ft_bubble_sort(int *swap, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (swap[i] > swap[j])
			{
				tmp = swap[i];
				swap[i] = swap[j];
				swap[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (swap[size / 2]);
}

void	ft_pivot(t_stack *stack, int *pivot, int len)
{
	int	i;
	int	*swap;

	swap = (int *)malloc(sizeof(int) * len);
	if (!swap)
		ft_free(stack);
	i = 0;
	while (i < len)
	{
		swap[i] = stack->a[i];
		i++;
	}
	*pivot = ft_bubble_sort(swap, len);
	free(swap);
}

void	ft_pivot_b(t_stack *stack, int *pivot, int len)
{
	int	i;
	int	*swap;

	swap = (int *)malloc(sizeof(int) * len);
	if (!swap)
		ft_free(stack);
	i = 0;
	while (i < len)
	{
		swap[i] = stack->b[i];
		i++;
	}
	*pivot = ft_bubble_sort(swap, len);
	free(swap);
}
