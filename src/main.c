/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:34:33 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/07 15:29:33 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/libft.h"

void	ft_malloc_check(t_stack *stack, int flag)
{
	if (flag == 1)
	{
		if (!stack->number)
			ft_free(stack);
	}
	if (!stack->a || !stack->b)
		ft_free(stack);
}

void	ft_two_more_arg(char **av, t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
		i++;
	i--;
	stack->size_a = i;
	stack->args = i;
	stack->size_b = 0;
	stack->a = malloc(sizeof(int) * i);
	stack->b = malloc(sizeof(int) * i);
	ft_malloc_check(stack, 0);
	i = 1;
	j = 0;
	while (av[i])
	{
		stack->a[j] = ft_ps_atoi(av[i], stack);
		i++;
		j++;
	}
	ft_check_repeat(stack);
}

void	ft_free_main(t_stack *stack)
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
}

int	main(int ac, char **av)
{
	t_stack	*stack;
	int		i;

	i = 0;
	stack = malloc(sizeof(t_stack));
	if (ac == 2)
	{
		stack->number = ft_split(av[1], 32);
		while (stack->number[i])
			i++;
		stack->size_a = i;
		stack->args = i;
		stack->size_b = 0;
		stack->a = malloc(sizeof(int) * i);
		stack->b = malloc(sizeof(int) * i);
		ft_malloc_check(stack, 1);
		i = -1;
		while (stack->number[++i])
			stack->a[i] = ft_ps_atoi(stack->number[i], stack);
		ft_check_repeat(stack);
	}
	else if (ac > 2)
		ft_two_more_arg(av, stack);
	return (ft_sort(stack), ft_free_main(stack), 1);
}
