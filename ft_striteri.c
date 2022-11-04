/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/29 10:20:54 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 14:52:50 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void(*f) (unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		++i;
	}
}

/*
hello -> aaaaa


s = hello
void *f(unsigned int, char *s)
{
	i = 0;
	
	while (s[i] != '\0')
	{
		s[i] = 'a';
		i++;
	}
	}   
}
*/