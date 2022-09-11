/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_length_modifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:34:43 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/11 22:20:12 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_length_modifier(char c, va_list args, t_format *f)
{	
	int	star;

	if (f->star > 0 || !f->p)
		return (0);
	if (c == '*')
	{
		star = va_arg(args, int);
		if (star < 0)
			star *= -1;
		f->pcs = star;
		f->star++;
	}	
	else if (ft_isdigit(c))
		f->pcs = f->pcs * 10 + c - '0';
	else
		return (0);
	return (1);
}
