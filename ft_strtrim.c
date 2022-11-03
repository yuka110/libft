/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 16:29:55 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/26 18:55:17 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int	suf;
	int	pre;
	int	newlen;

	pre = 0;
	suf = ft_strlen(s1);
	while (ft_strchr(set, s1[pre]) != NULL)
	{
		++pre;
	}
	while (ft_strchr(set, s1[suf - 1]) != NULL)
	{
		--suf;
	}
	newlen = suf- pre;
	if (newlen <= 0)
		newlen = 1;
	arr = (char *)malloc(newlen * sizeof(char));
	if (arr == NULL)
		return (NULL);
	arr = ft_substr(s1, pre, newlen);
	return (arr);
}

/*
s1 = 4123456
set = 456

pre 123456
suf 456
return char* = 123

*/
