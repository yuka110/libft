/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 11:54:20 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 15:59:05 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	arr = (char *)ft_calloc((len + 1), sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		arr[i] = s[start];
		++i;
		++start;
	}
	return (arr);
}
/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len
*/