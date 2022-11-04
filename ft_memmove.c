/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:28:57 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 16:52:51 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	int			j;
	char		*arr1;
	const char	*arr2;

	i = 0;
	j = i;
	arr1 = (char *)dst;
	arr2 = (const char *)src;
	if (arr1 == 0 && arr2 == 0)
		return (NULL);
	if (dst > src)
	{
		i = len - 1;
		j = i;
		while (i >= 0 && j >= 0)
			arr1[i--] = arr2[j--];
	}
	else
	{
		while (i < (int) len && j < (int) len)
			arr1[i++] = arr2[j++];
	}
	return (dst);
}

/*
DESCRIPTION
     The memmove() function copies len bytes from string src 
	 to string dst.  The two strings may overlap; the
     copy is always done in a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.

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