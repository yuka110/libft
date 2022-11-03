/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 16:27:49 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/25 10:49:24 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || \
			str[i] == '\t' || str[i] == '\v' ||\
			str[i] == '\f' || str[i] == '\r')
		++i;
	if (str[i] == '+')
		++i;
	else if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				num = 10 * num + (str[i] - 48);
				++i;
			}
			else
				break ;
		}
	}
	if (num > 2147483647)
		return (1 * sign);
	return (num * sign);
}
