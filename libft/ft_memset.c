/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 05:17:47 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 06:36:09 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t len)
{
	unsigned char	*p_dst;

	p_dst = (unsigned char *)dst;
	while (len-- > 0)
		*(p_dst++) = (unsigned char)val;
	return (dst);
}
