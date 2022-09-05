/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:50:27 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 21:50:31 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset_last(void *dst, int val, size_t len)
{
	unsigned char	*p_dst;

	p_dst = (unsigned char *)dst;
	while (len-- > 0)
		*(p_dst++) = (unsigned char)val;
	return (p_dst - 1);
}
