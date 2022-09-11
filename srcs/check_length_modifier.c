/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_length_modifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:34:43 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/11 22:31:22 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_length_modifier(char c, va_list args, t_format *f)
{	
	if (f->star > 0 || !f->p)
		return (0);
	if (c == '*')
	{
		f->pcs = va_arg(args, int);
		f->star++;
	}	
	else if (ft_isdigit(c))
		f->pcs = f->pcs * 10 + c - '0';
	else
		return (0);
	return (1);
}
