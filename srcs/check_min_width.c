/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 06:19:54 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 10:45:11 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	Check_Min_Width(char c, va_list args, t_format *f)
{
	int	star;
	
	if (c == '*')
	{
		star = va_arg(args, int);
		if (star < 0)
		{
			f->minus = 1;
			star *= -1;
		}
		f->width = star;
	}
	else if (ft_isdigit(c))
		f->wdt = f->wdt * 10 + c - '0';
	else
		return 0;
	return 1;
}