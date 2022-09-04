/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:46:28 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 10:47:07 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

char	check_format(char c, va_list args, t_format *f)
{
	if (Check_Flag(c, f)
		|| Check_Min_Width(c, args, f)
		|| Check_Precision(c, f)
		|| Check_Length_Modifier(c, args, f))
		return (0);
	return (Check_Conversion_Specifier(c, f));
}
