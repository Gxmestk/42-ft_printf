/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 06:19:54 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 04:42:04 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_min_width(char c, va_list args, t_format *f)
{
	int	star;

	if (f->star)
		return (0);
	if (c == '*')
	{
		star = va_arg(args, int);
		if (star < 0)
		{
			f->minus = 1;
			star *= -1;
		}
		f->wdt = star;
		f->star = 1;
	}
	else if (ft_isdigit(c))
		f->wdt = f->wdt * 10 + c - '0';
	else
		return (0);
	return (1);
}
