/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:29:36 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 14:51:25 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*arr1;
	unsigned char		*arr2;

	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && arr1[i] != '\0' && arr2[i] != '\0')
	{
		if (arr1[i] != arr2[i])
			break ;
		++i;
	}
	return ((int) arr1[i] - arr2[i]);
}

/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare 
	 the null-terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  
	 Because strncmp() is designed for comparing
     strings rather than binary data, characters that appear after 
	 a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater 
	 than, equal to, or less than 0, according
     as the string s1 is greater than, equal to, or less than the 
	 string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.
*/