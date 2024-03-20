/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:30:20 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/07 15:20:59 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	int		args;
	char	**number;
}	t_stack;

int		ft_is_sorted(t_stack *stack);
int		ft_ps_atoi(char *str, t_stack *stack);
int		ft_sort_three(t_stack *stack);
int		ft_find_max(t_stack *stack);

int		ft_start_sort(t_stack *stack);
int		ft_sort_b(t_stack *stack);
int		ft_sort_b2(t_stack *stack, int i, int max);

void	ft_pivot(t_stack *stack, int *pivot, int len);
void	ft_free(t_stack *stack);
void	ft_check_repeat(t_stack *stack);
void	ft_sort(t_stack *stack);
void	ft_free_main(t_stack *stack);

//quick sort
int		ft_first_seperation(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
int		ft_sort_small_a(t_stack *s);
int		ft_sort_small_a2(t_stack *s, int len);
int		ft_sort_small_b(t_stack *s, int len);
int		ft_is_sorted_b(t_stack *stack);
void	ft_pivot_b(t_stack *stack, int *pivot, int len);

//stack a
void	pa(t_stack *stack);
int		sa(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);

//stack b
void	pb(t_stack *stack);
void	rb(t_stack *stack);
void	rrb(t_stack *stack);
void	sb(t_stack	*stack);

//all stacks
void	ss(t_stack	*s);
void	rr(t_stack	*s);
void	rrr(t_stack *s);

#endif
