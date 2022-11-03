/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 11:23:19 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/29 09:14:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_digit(int n)
{
	int		copy;
	int		digit;

	copy = n;
	digit = 0;
	if (copy == 0)
		++digit;
	while (copy > 0)
	{
		copy = copy / 10;
		++digit;
//printf("digit = %d\n", digit);
	}
	//printf("digit is %d\n", digit);
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		sign;
	int		count;

	sign = 0;
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	count = count_digit(n);
	i = count + sign - 1;
	num = malloc((count + sign + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	while (i >= 0)
	{
		num[i] = (n % 10) + 48;
		//printf("num[%d] = %c\n", i, num[i]);
		--i;
		n = n / 10;
		//printf("i = %d, next n = %d\n", i, n);
	}
	if (sign == 1)
		num[0] = '-';
	num[count + sign] = '\0';
	return (num);
}