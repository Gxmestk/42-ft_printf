/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:34:52 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 11:50:36 by tkhemniw         ###   ########.fr       */
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

typedef struct s_format
{
	int		plus;
	int		sp;
	int		hash;
	int		minus;
	int		zero;
	int		wdt;
	int		pcs;
	int		p;
	int		star;
	size_t	len_f;
	int		prefix_len;
	int		arr[3];
}		t_format;

typedef struct s_printf
{
	va_list		args;
	size_t		len;
	t_format	f;
	char		c;
	int			formatting;
}		t_printf;

int		ft_printf(const char *str, ...);
char	check_format(char c, va_list args, t_format *f);
int		check_flag(char c, t_format *f);
int		check_min_width(char c, va_list args, t_format *f);
int		check_precision(char c, t_format *f);
int		check_length_modifier(char c, va_list args, t_format *f);
char	check_conversion_specifier(char c);
int		print_by_format(char c, va_list args, t_format *f);
char	*print_d(int d, t_format *f);
char	*print_c(char c, t_format *f);
char	*print_u(unsigned int u, t_format *f);
char	*print_x(unsigned int x, t_format *f, int upper);
char	*print_p(unsigned long long p, t_format *f);
char	*print_s(char *s, t_format *f);
void	add_int_prefix(char **str, long d, t_format *f);
void	add_int_content(char **str, long d, t_format *f);
void	zero_abs_itoa(long n, char **str, t_format *f);
void	print_wdt(char **str, t_format *f);
int		len(long n);
void	reset_format(t_printf	*pf);
void	add_hex_prefix(char **str, unsigned int x, t_format *f);
void	add_hex_content(char **str, unsigned int x, t_format *f);
int		lenx(unsigned int n);
void	zero_abs_htoa(unsigned int x, char **str, t_format *f);
#endif