/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_abs_htoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:12:31 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 11:44:42 by tkhemniw         ###   ########.fr       */
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
	int		size;
	char	h[16];
	
	if (!(*str))
		return ;
	size = lenx(x);
	*str = (char *)ft_memset_last(*str, '0', f->pcs - size);
	if (num == 0)
	{
		**str = '0';
		(*str)++;
		return ;
	}
	size--;
	while (num)
	{
		*((*str) + size) = "0123456789abcdef"[num % 16];
		num = num / 16;
		size--;
	}
	*str += lenx(x);
}
