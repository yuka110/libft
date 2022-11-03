/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:29:36 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/22 15:01:26 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t				i;
	unsigned char		*arr1;
	unsigned char		*arr2;

	arr1 = (unsigned char *)str1;
	arr2 = (unsigned char *)str2;
	i = 0;
	while (i < n - 1 && arr1[i] != '\0' && arr2[i] != '\0')
	{
		if (arr1[i] != arr2[i])
			break ;
		++i;
	}
	return ((int) arr1[i] - arr2[i]);
}
