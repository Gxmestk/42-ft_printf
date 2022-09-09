/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:07:54 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/09/09 11:55:32 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_isdigit(int c);
char	*ft_strchr(const char *str, int c);
int		ft_sort_max_three(int arr[3], int a, int b, int c);
void	*ft_memset_last(void *dst, int val, int len);
int		ft_strupper(char *str);
#endif
