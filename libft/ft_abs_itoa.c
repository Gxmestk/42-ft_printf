/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:26:56 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 21:39:08 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	len(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

void	ft_abs_itoa(int n, char **str)
{
	size_t	size;
	long	num;

	size = len(n);
	num = n;
	if (!(*str))
		return ;
	if (num < 0)
		num = -num;
	if (num == 0)
		*str = 48;
	size--;
	while (num)
	{
		(*str) + size = (num % 10) + 48;
		num = num / 10;
		size--;
	}
	*str += size + 1;
}
