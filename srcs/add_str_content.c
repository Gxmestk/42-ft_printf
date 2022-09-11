/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_str_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:33:31 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/11 18:56:44 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_str_content(char **str, char *s, t_format *f, int lenw)
{
	if (f->minus)
	{
		*str += 5;//ft_strlcpy(*str, s, lenw + 1);
		*str = (char *)ft_memset_last(*str, ' ', f->wdt
				- lenw);
		**str = '\0';
	}
	else
	{
		*str = (char *)ft_memset_last(*str, ' ', f->wdt
				- lenw);
		s++;
		s--;
		*str += 5;//ft_strlcpy(*str, s, lenw + 1);
	}
}
