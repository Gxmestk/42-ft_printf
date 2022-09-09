/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_hex_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:09:28 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 14:40:34 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_hex_content(char **str, unsigned int x, t_format *f)
{
	if (lenx(x) == f->arr[0] || f->pcs == f->arr[0])
		zero_abs_htoa(x, str, f);
	else if (f->wdt == f->arr[0])
	{
		if (f->minus)
		{
			zero_abs_htoa(x, str, f);
			print_wdt(str, f);
		}
		else
		{
			print_wdt(str, f);
			if (!f->zero)
				add_hex_prefix(str, x, f);
			zero_abs_htoa(x, str, f);
		}
	}
	if (f->arr[0] - f->arr[1] > 0)
		f->len_f -= f->prefix_len;
	**str = '\0';
}
