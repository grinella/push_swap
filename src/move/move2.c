/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:27:02 by grinella          #+#    #+#             */
/*   Updated: 2023/09/22 12:27:03 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ss(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	sab(pila_a, size_a[0]);
	sab(pila_b, size_b[0]);
	write(1, "ss\n", 3);
}

void	rr(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	rab(pila_a, size_a[0]);
	rab(pila_b, size_b[0]);
	write(1, "rr\n", 3);
}

void	rrr(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	rrab(pila_a, size_a[0]);
	rrab(pila_b, size_b[0]);
	write(1, "rrr\n", 4);
}

void	sa(long *a, int size)
{
	sab(a, size);
	write(1, "sa\n", 3);
}
