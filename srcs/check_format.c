/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:46:28 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 04:40:54 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	check_format(char c, va_list args, t_format *f)
{
	if (check_flag(c, f)
		|| check_min_width(c, args, f)
		|| check_precision(c, f)
		|| check_length_modifier(c, args, f))
		return (0);
	return (check_conversion_specifier(c));
}
