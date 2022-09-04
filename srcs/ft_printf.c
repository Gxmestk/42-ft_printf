/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:38:32 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 04:40:44 by tkhemniw         ###   ########.fr       */
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
		if (pf.formatting)
		{
			pf.c = check_format(*str, pf.args, pf.f);
			if (pf.c)
			{
				pf.len += print_by_format(pf.c, pf.args, pf.f);
				pf.formatting = 0;
			}
		}
		else if (*str == '%')
			reset_format(&pf);
		else
			pf.len += write(1, str, 1);
		str++;
	}
	va_end(pf.args);
	return (pf.len);
}
