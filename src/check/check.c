/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:25:16 by grinella          #+#    #+#             */
/*   Updated: 2023/09/22 12:25:20 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
