/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:38:32 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 06:13:23 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_printf	pf;

	if (str == NULL)
		return (0);
	pf.formatting = 0;
	va_start(pf.args, str);
	while (*str)
	{
		if (*str == '%')
			pf.formatting = 1;
		else
			pf.len += write(1, *str, 1);
		if (pf.formatting)
		{
			pf.c = Check_Format(*str, pf.args, pf.f);
			if (pf.c)
			{
				pf.len += Print_By_Format(pf.args, pf.f);
				pf.formatting = 0;
			}
		}
		str++;
	}
	va_end(pf.args);
	return (pf.len);
}
