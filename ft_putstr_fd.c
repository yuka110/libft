/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/29 11:50:42 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/02 09:39:31 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;
	int	i;

	count = ft_strlen(s);
	i = 0;
	while (i <= count)
	{
		write(fd, &s[i], 1);
		++i;
	}
}