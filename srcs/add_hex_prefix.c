/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_hex_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:04:11 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/10 10:07:18 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_hex_prefix(char **str, unsigned long long x, t_format *f)
{
	if (f->hash)
	{	
		if (x != 0)
		{
			**str = '0';
			(*str)++;
			**str = 'x';
			(*str)++;
		}
	}
	else
		return ;
}
