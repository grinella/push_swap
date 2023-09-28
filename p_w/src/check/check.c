/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabriele <Gabriele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:25:16 by grinella          #+#    #+#             */
/*   Updated: 2023/09/28 15:44:11 by Gabriele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_copy

void	ft_sort(long *pila_a, int *size_a)
{
	int	i;
	int	num[size_a[0]];
	int	temp;
	int	j;

	i = 0;
	while (i < size_a[0])
	{
		num[i] = pila_a[i];
		i++;
	}
	i = 0;
	j = 0;
	while (j < size_a[0] - 1)
	{
		i = 0;
		while (i < size_a[0] - 1)
		{
			if (stack->num[i] > stack->num[i + 1])
			{
				temp = stack->num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

// void	ft_check_sort(long *pila_a, int *size_a)
// {
// 	int		i;
// 	long	*num;

	
// 	i = 0;
// 	while (i < size_a[0])
// 	{
// 		if (num[i] != pila_a[i])
// 			return ;
// 		i++;
// 	}
// 	exit(0);
// }

int	checkorder(long *pila_a, int *size_a)
{
	int	i;

	if (size_a[0] != size_a[1])
		return (0);
	i = 0;
	while (i < size_a[0] && pila_a[i] < pila_a[i + 1])
	{
		i++;
	}
	if (i == size_a[0] - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	checkduplicati(long *pila_a, int *size_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_a[0] - 1)
	{
		j = i + 1;
		while (j < size_a[0])
		{
			if (pila_a[i] == pila_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
