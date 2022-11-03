/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 11:54:20 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/02 19:04:39 by yitoh         ########   odam.nl         */
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
	arr = (char *)malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = s[start];
		++i;
		++start;
	}
	arr[i] = '\0';
	return (arr);
}
/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len
*/