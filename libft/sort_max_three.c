/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:57:55 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 22:26:45 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	sort_max_three(int arr[3], int a, int b, int c)
{
	if (a < b)
		ft_swap(&a, &b);
	if (a < c)
		ft_swap(&a, &c);
	if (b < c)
		ft_swap(&b, &c);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	return (arr[0]);
}
