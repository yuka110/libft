/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:28:29 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/03 19:49:58 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) ptr1;
	str2 = (unsigned char *) ptr2;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (str1[i] != str2[i])
			break ;
		++i;
	}
	return ((int) str1[i] - str2[i]);
}
