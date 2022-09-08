/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:31:21 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/08 23:03:11 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_precision(char c, t_format *f)
{
	if (f->p)
		return (0);
	if (c == '.')
		f->p = 1;
	else
		return (0);
	return (1);
}
