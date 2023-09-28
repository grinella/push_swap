/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:32:52 by grinella          #+#    #+#             */
/*   Updated: 2023/09/22 12:32:53 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	maxim(long *pila, int *size)
{
	int	i;
	int	max;
	int	indice;

	i = 0;
	max = -23343545;
	indice = 0;
	while (i < size[0])
	{
		if (pila[i] > max)
		{
			max = pila[i];
			indice = i;
		}
		i++;
	}
	return (indice);
}

int	min(long *pila, int *size)
{
	int	i;
	int	min;
	int	indice;

	i = 0;
	min = 23343545;
	indice = 0;
	while (i < size[0])
	{
		if (pila[i] < min)
		{
			min = pila[i];
			indice = i;
		}
		i++;
	}
	return (indice);
}
