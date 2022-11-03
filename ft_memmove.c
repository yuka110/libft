/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:28:57 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/24 17:19:36 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char		*arr1;
	const char	*arr2;

	i = 0;
	arr1 = (char *)dst;
	arr2 = (const char *)src;
	if (dst > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			arr1[i] = arr2[i];
			--i;
		}
	}
	else
	{
		while (i < (int) n)
		{
			arr1[i] = arr2[i];
			++i;
		}
	}
	return (dst);
}

/*

we need happy ending
      s d
	  
n = 6 - d happ

target 0123456789
dst = target + 5 (56789)
src = target + 2 (23456789)
n = 4 (2345)

what we want to create 01234/2345/9
if we copy from the beginning
0123456789
     s  d
src 23423429
dst 23429

if we copy from the end
0123456789
    s  d
dst 32459
src 23423459

p* to dst needs to start from dst + (n - 1)

*/