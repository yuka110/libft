/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:33 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/04 11:05:40 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	size_t	i;

	a = (char) c;
	i = 0;
	if (s == '\0')
		return (NULL);
	else
	{
		while (i < ft_strlen(s) + 1)
		{
			if (s[i] == a)
				return ((char *) s + i);
			++i;
		}
		return (NULL);
	}
}

/* DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by
     s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the
     functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character
     does not appear in the string.
*/