/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 09:51:36 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/03 19:46:12 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

int	howmanystr(char const *s, char c)
{
	int	str_count;
	int	i;

	str_count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			++i;
		++str_count;
		while (s[i] == c && s[i] != '\0')
			++i;
	}
	return (str_count);
}

int	get_strlen(char const *s, char c)
{
	//printf("pointer is located at %s\n", s);
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c)
		++i;
	while (s[i + j] != c && s[i + j] != '\0')
		++j;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		strnum;
	int		count;
	int		row;
	int		i;
	int		skip;
	char	**arr;

	row = 0;
	count = 0;
	skip = 0;
	i = 0;
	strnum = howmanystr(s, c);
	//printf("test: %s\n", s);
	//printf("we need %d str\n", strnum);
	arr = calloc (strnum + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i] == c)
		++i;
	while (row < strnum)
	{
		count = get_strlen(s + i + skip, c);
		//printf("we need %d words in str[%d]\n", count, row);
		
		arr[row] = ft_substr(s, i + skip, count);
		if (!arr[row])
		{
			while (row >= 0)
			{
				--row;
				free(arr[row]);
			}
			free(arr);
			return (NULL);
		}
		//printf("i = %d, skip = %d\n", i, skip);
		//printf("array = %s, current index = %d\n", arr[row], i + skip);
		++row;
		i = i + count + 1;
		while (s[i + skip] == c)
		{
			++skip;
			++count;
		}
	}
	return (arr);
}

/*
hello///////halo/halo
012345678901234567890


[crash]: you did not protect your split
 Test code:
        char *s = "      split       this for   me  !       ";
 
        char **result = ft_split(s, ' ');
        if (!result)
                exit(TEST_SUCCESS);
        exit(TEST_FAILED);

*/