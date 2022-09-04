/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:34:52 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/04 10:45:55 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define HOLDER_CONVERSION "cspdiuxX%o"
# define HOLDER_ALL "-0# +123456789*"
# define HOLDER_ALL_FLAGS "-0# +"
# define HOLDER_JUSTIFY '-'
# define HOLDER_PREFIX "# +"
# define HOLDER_PAD '0'
# define HOLDER_PRECISION '.'
# define HOLDER_STAR '*'

# define OCTAL_BASE "01234567"
# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_U_BASE "0123456789ABCDEF"
# define HEXADECIMAL_L_BASE "0123456789abcdef"

# define PTR_HEX_L_PREFIX "0x"
# define HEX_U_PREFIX "0X"
# define OCT_PREFIX "0"
# define MINUS '-'
# define PLUS '+'
# define SPACE ' '

typedef struct s_format
{
	int		plus;
	int		sp;
	int		hash;
	int		minus;
	int		zero;
	int		pcs;
	int		p;
	int		perc;
}		t_format;

typedef struct s_printf
{
	va_list		args;
	size_t		len;
	t_format	*f;
	char		c;
	int			formatting;
}		t_printf;

int		ft_printf(const char *str, ...);
char	Check_Format(char c, va_list args, t_format *f);
int	Check_Flag(char c, t_format *f)
int	Check_Min_Width(char c, va_list args, t_format *f);
int	Check_Precision(char c, va_list args, t_format *f);
int	Check_Length_Modifier(char c, va_list args, t_format *f);
#endif