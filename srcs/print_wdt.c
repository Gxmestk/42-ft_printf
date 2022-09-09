/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_wdt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:10:22 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 14:30:57 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_wdt(char **str, t_format *f)
{
	char	w;

	if (!(*str))
		return ;
	w = ' ';
	if (f->zero && !f->minus)
		w = '0';
	*str = (char *)ft_memset_last(*str, w, f->arr[0]
			- f->arr[1] - f->prefix_len);
}
