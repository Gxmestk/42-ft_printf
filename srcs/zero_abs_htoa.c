/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_abs_htoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:12:31 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 14:54:51 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	lenx(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	while (n)
	{
		size++;
		n = n / 16;
	}
	return (size);
}

void	zero_abs_htoa(unsigned int x, char **str, t_format *f)
{
	int				size;
	unsigned int	hex;

	if (!(*str))
		return ;
	size = lenx(x);
	*str = (char *)ft_memset_last(*str, '0', f->pcs - size);
	if (x == 0)
	{
		**str = '0';
		(*str)++;
		if (f->hash)
			f->len_f -= f->prefix_len;
		return ;
	}
	size--;
	hex = x;
	while (x)
	{
		*((*str) + size) = "0123456789abcdef"[x % 16];
		x = x / 16;
		size--;
	}
	*str += lenx(hex);
}
