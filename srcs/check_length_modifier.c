/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_length_modifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:34:43 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 10:45:00 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	Check_Length_Modifier(char c, va_list args, t_format *f)
{
	if (c == '*')
	{
		if (f->p)
			f->pcs = va_arg(args, int);
	}
	else if (ft_isdigit(c))
		f->p = f->p * 10 + c - '0';
	else
		return (0);
	return (1);
}