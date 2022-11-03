/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:28:21 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/22 14:59:49 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	x;

	i = 0;
	arr = (unsigned char *)str;
	x = (unsigned char) c;
	while (i < n)
	{
		if (arr[i] == x)
			return ((void *) arr + i);
		else
			++i;
	}
	return (NULL);
}
