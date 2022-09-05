/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_of_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:57:23 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/05 12:58:20 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	max_of_three(int a,int b,int c)
{
	if (a >= b && a >= c)
		return (a);
	else if (b >= a && b >= c)
		return (b);
	else if (c >= a && c >= b)
		return (c);
}
