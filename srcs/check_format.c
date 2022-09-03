/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 05:59:25 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 06:14:21 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	Check_Format(char c, va_list args, t_format *f)
{
	if (Check_Flag(c, f)
		|| Check_Min_Width(c, args, f)
		|| Check_Precision(c, f)
		|| Check_Length_Modifier(c, args, f))
		return (0);
	return (Check_Conversion_Specifier(c, f));
}
