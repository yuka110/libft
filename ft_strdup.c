/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 14:56:06 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 14:01:17 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*pt;

	len = ft_strlen(s1) + 1;
	pt = malloc(len * sizeof(char));
	if (!pt)
		return (NULL);
	ft_memcpy(pt, s1, len);
	return (pt);
}