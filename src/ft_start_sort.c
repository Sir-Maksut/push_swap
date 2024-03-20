/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:14:03 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/07 12:10:04 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_start_sort(t_stack *stack)
{
	int	pivot;
	int	size;

	if (stack->size_a == stack->args && ft_is_sorted(stack))
		return (0);
	if (stack->size_a == 2 && (!(ft_is_sorted(stack))))
		return (sa(stack), ft_sort_b(stack));
	else if (stack->size_a == 2 && ft_is_sorted(stack))
		return (ft_sort_b(stack));
	if (stack->size_a == 3 && (!(ft_is_sorted(stack))))
		return (ft_sort_three(stack), ft_sort_b(stack));
	else if (stack->size_a == 3 && ft_is_sorted(stack))
		return (ft_sort_b(stack));
	ft_pivot(stack, &pivot, stack->size_a);
	size = ((stack->size_a / 2) + (stack->size_a % 2));
	while (size != stack->size_a)
	{
		if (stack->a[0] < pivot)
			pb(stack);
		else
			ra(stack);
	}
	return (ft_start_sort(stack));
}

int	ft_sort_b(t_stack *stack)
{
	int	max;
	int	i;

	i = 0;
	if (stack->size_b == 0)
		return (ft_start_sort(stack));
	max = ft_find_max(stack);
	if (stack->b[0] == max)
		pa(stack);
	max = ft_find_max(stack);
	while (stack->b[i] != max)
		i++;
	if (i <= (stack->size_b / 2))
	{
		while (stack->b[0] != max)
			rb(stack);
		if (stack->b[0] == max)
		{
			pa(stack);
			return (ft_sort_b(stack));
		}
	}
	return (ft_sort_b2(stack, i, max));
}

int	ft_sort_b2(t_stack *stack, int i, int max)
{
	max = ft_find_max(stack);
	while (stack->b[i] != max)
		i++;
	if (i > (stack->size_b / 2))
	{
		while (stack->b[0] != max)
		{
			rrb(stack);
		}
		if (stack->b[0] == max)
		{
			pa(stack);
			return (ft_sort_b(stack));
		}
	}
	return (ft_sort_b(stack));
}
