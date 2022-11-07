/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:45 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/07 19:57:23 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	i = 0;
	ii = 0;
	if (needle[ii] == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	else
	{
		while (i + ii < len && haystack[i + ii] != '\0'
			&& needle[ii] != '\0')
		{
			ii = 0;
			while (haystack[i + ii] == needle[ii] && i + ii < len)
			{
				++ii;
				if (needle[ii] == '\0')
					return ((char *)&haystack[i]);
			}
			++i;
		}
		return (NULL);
	}
}

/*

hello
012345
  01
ll
012
DESCRIPTION
The strnstr() function locates the first occurrence of 
the null-terminated string needle in the string
haystack, where not more than len characters are searched.  
Characters that appear after a `\0' character
are not searched.  Since the strnstr() function is a FreeBSD
specific API, it should only be used when
portability is not a concern.

RETURN VALUES
If needle is an empty string, haystack is returned; if needle 
occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first 
occurrence of needle is returned.
*/