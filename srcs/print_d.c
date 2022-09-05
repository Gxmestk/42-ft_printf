/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 03:20:18 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 22:00:16 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*print_d(int d, t_format *f)
{
	char	*str;
	char	*rstr;
	
	f->len_f = sort_max_three((f->arr), f->wdt, f->pcs, len(d));
	if (f->plus || f->sp || d < 0)
		f->len_f++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	rstr = str;
	add_int_prefix(&str, d, f);
	if (f->wdt == f->arr[0])
		if (f->minus)
			ft_abs_itoa(d, &str);
			print_wdt(&str, f);
		else
			print_wdt(&str, f);
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