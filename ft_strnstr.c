/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:43:45 by yitoh         #+#    #+#                 */
/*   Updated: 2022/10/24 16:26:46 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char*s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ii;
	
	i = 0;
	ii = 0;
	if (s2[ii] == '\0' || n == 0)
		return ((char *)s1);
	else
	{
		while (i + ii < n - 1 && s1[i + ii] != '\0' && s2[ii] != '\0')
		{
			if (s1[i + ii] != s2[ii])
				++i;
			else
				++ii;
		}
		if (s2[ii] == '\0')
			return ((char *) s1 + i);
		return (NULL);
	}
}

/*[fail]: your strnstr does not work with the same pointer "little" string
Test code:
        char *s1 = "AAAAAAAAAAAAA";
        size_t max = strlen(s1);
        char *i1 = strnstr(s1, s1, max);
        char *i2 = ft_strnstr(s1, s1, max);

        if (i1 == i2)
                exit(TEST_SUCCESS);
        exit(TEST_FAILED);

Diffs:
     strnstr: |AAAAAAAAAAAAA|
  ft_strnstr: |(null)|*/

/*hey yollo     yol
  AAAAAAAAAAAAA
  AAAAAAAAAAAAA
  13
  i = 
  ii = */