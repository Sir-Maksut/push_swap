/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:58:54 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/06 11:58:54 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_first_seperation(t_stack *stack, int len)
{
	int	pivot_a;
	int	pivot_b;
	int	items;

	items = len;
	ft_pivot(stack, &pivot_a, len);
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot_a && (len--))
			pb(stack);
		else
		{
			ft_pivot_b(stack, &pivot_b, stack->size_b);
			if ((stack->b[0] <= pivot_b) && (stack->size_b > 2))
				rr(stack);
			else
				ra(stack);
		}
	}
	ft_quicksort_a(stack, items / 2 + items % 2, 0);
	ft_quicksort_b(stack, items / 2, 0);
	return (1);
}

int	ft_quicksort_a(t_stack *stack, int len, int count)
{
	int	pivot_a;
	int	items;

	if (ft_is_sorted(stack) == 1)
		return (1);
	if (len == 2)
		return (ft_sort_small_a(stack));
	else if (len == 3 && stack->size_a == 3)
		return (ft_sort_three(stack));
	else if (len == 3)
		return (ft_sort_small_a2(stack, len));
	ft_pivot(stack, &pivot_a, len);
	items = len;
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot_a && (len--))
			pb(stack);
		else if (++count)
			ra(stack);
	}
	while (items / 2 + items % 2 != stack->size_a && count--)
		rra(stack);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0),
		ft_quicksort_b(stack, items / 2, 0));
}

int	ft_quicksort_b(t_stack *stack, int len, int count)
{
	int	pivot_b;
	int	items;

	if (!count && ft_is_sorted_b(stack) == 1)
		while (len--)
			pa(stack);
	if (len <= 3)
		return (ft_sort_small_b(stack, len));
	ft_pivot_b(stack, &pivot_b, len);
	items = len;
	while (len != items / 2)
	{
		if (stack->b[0] >= pivot_b && (len--))
			pa(stack);
		else if (++count)
			rb(stack);
	}
	while (items / 2 != stack->size_b && count--)
		rrb(stack);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0),
		ft_quicksort_b(stack, items / 2, 0));
	return (1);
}
