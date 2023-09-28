/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:27:10 by grinella          #+#    #+#             */
/*   Updated: 2023/09/22 12:27:11 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sb(long *a, int size)
{
	sab(a, size);
	write(1, "sb\n", 3);
}

void	rra(long *a, int size)
{
	rrab(a, size);
	write(1, "rra\n", 4);
}

void	rrb(long *a, int size)
{
	rrab(a, size);
	write(1, "rrb\n", 4);
}

void	ra(long *a, int size)
{
	rab(a, size);
	write(1, "ra\n", 3);
}

void	rb(long *a, int size)
{
	rab(a, size);
	write(1, "rb\n", 3);
}
