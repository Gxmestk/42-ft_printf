/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_char_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:33:33 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/10 14:35:46 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_char_content(char **str, char c, t_format *f)
{
	if (f->minus)
	{
		**str = c;
		(*str)++;
		*str = (char *)ft_memset_last(*str, ' ', f->wdt - 1);
	}
	else
	{
		*str = (char *)ft_memset_last(*str, ' ', f->wdt - 1);
		**str = c;
		(*str)++;
	}
	**str = '\0';
}