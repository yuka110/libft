/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:28:49 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/22 15:00:14 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *) dst;
	str2 = (char *) src;
	while (i < size)
	{
		str1[i] = str2[i];
		i++;
	}
	return ((void *)str1);
}
