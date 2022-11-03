/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:40:43 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/22 15:00:21 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	char			*arr;

	i = 0;
	a = (unsigned char) c;
	arr = (char *) str;
	while (i < n)
	{
		arr[i] = a;
		++i;
	}
	return ((void *)arr);
}
