/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:49:53 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 12:19:52 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*print_u(unsigned int u, t_format *f)
{
	char	*str;
	char	*rstr;

	f->len_f = ft_sort_max_three(f->arr, f->wdt, f->pcs, len(u));
	str = (char *)malloc(sizeof(char) * f->len_f + 1);
	if (!str)
		return (NULL);
	rstr = str;
	if (f->wdt != f->arr[0] || f->minus || f->zero)
		add_int_prefix(&str, u, f);
	add_int_content(&str, u, f);
	return (rstr);
}
