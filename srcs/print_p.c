/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:50:12 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/10 10:05:40 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*print_p(unsigned long long p, t_format *f)
{
	char	*str;
	char	*rstr;

	f->len_f = ft_sort_max_three(f->arr, f->wdt, f->pcs, lenx(p, f));
	f->hash = 1;
	f->len_f += 2;
	f->prefix_len += 2;
	str = (char *)malloc(sizeof(char) * f->len_f + 1);
	if (!str)
		return (NULL);
	rstr = str;
	if (f->wdt != f->arr[0] || f->minus || (f->zero && !f->p)
		|| f->arr[0] == f->arr[1])
		add_hex_prefix(&str, p, f);
	add_hex_content(&str, p, f);
	return (rstr);
}
