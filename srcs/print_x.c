/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:50:12 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 12:06:21 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*print_x(unsigned int x, t_format *f, int upper)
{
	char	*str;
	char	*rstr;

	f->len_f = ft_sort_max_three((f->arr), f->wdt, f->pcs, lenx(x));
	if (f->hash)
		f->len_f+=2;
	str = (char *)malloc(sizeof(char) * f->len_f + 1);
	if (!str)
		return (NULL);
	rstr = str;
	if (f->wdt != f->arr[0] || f->minus || f->zero)
		add_hex_prefix(&str, x, f);
	add_hex_content(&str, x, f);
	if (upper)
		return (ft_strupper(rstr));
	else
		return (rstr);
}
