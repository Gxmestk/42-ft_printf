/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_hex_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:04:11 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 11:09:07 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_hex_prefix(char **str, unsigned int x, t_format *f)
{
	if (f->hash && x != 0)
	{	
		**str = '0';
		(*str)++;
		**str = 'x';
	}
	else
		return ;
	(*str)++;
	f->prefix_len = 2;
	f->len_f-=2;
}