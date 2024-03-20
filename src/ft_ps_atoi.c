/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocaman <mkocaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:35 by mkocaman          #+#    #+#             */
/*   Updated: 2023/12/06 14:15:35 by mkocaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_check_atoi(t_stack *stack, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				ft_free(stack);
		}
		i++;
	}
}

int	ft_ps_atoi(char *str, t_stack *stack)
{
	unsigned int	result;
	int				sign;
	int				i;

	i = 0;
	result = 0;
	sign = 1;
	ft_check_atoi(stack, str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_free(stack);
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	if ((result > 2147483647 && sign == 1)
		|| (result > 2147483648 && sign == -1))
		ft_free(stack);
	return (result * sign);
}
