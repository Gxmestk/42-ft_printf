/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 03:20:18 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 06:37:07 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*print_d(int d, t_format f)
{
	size_t	len;
	size_t	len_d;
	char	*str;

	len_d = len(d);
	len = max_of_three(f->wdt, f->pcs, len_d);
	if (f->plus || f->sp || d < 0)
		len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	add_int_prefix();
	if (f->wdt == max_of_three(f->wdt, f->pcs, len_d))
		if (f->minus)
			ft_abs_itoa();
			print_sp_wth();
		else
			print_spoz_wth();
			ft_abs_itoa();
	else
		if (len_d >= f->pcs)
			ft_abs_itoa();
		else
			print_zero();
			ft_abs_itoa();
}
/*len_d, f->pcs, f->wdt
	len_d, f->wdt, f->pcs

	f->wdt, len_d, f->pcs
	f->wdt, f->pcs, len_d

	f->pcs, len_d, f->wdt
	f->pcs, f->wdt, len_d

	f->minus;
	f->zero; 

	zero ignore with minus, precision
    sp  ignore with plus
	while til technique is interesting while while i++ s++   s++*/