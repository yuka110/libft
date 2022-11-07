/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 15:47:37 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/07 19:59:50 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int main(void)
{
	//ft_is*
	int c = 'G';
	printf("isalnum\n %d, %d\n", ft_isalnum(c), isalnum(c));
	printf("isalpha\n %d, %d\n", ft_isalpha(c), isalpha(c));
	printf("isascii\n %d, %d\n", ft_isascii(c), isascii(c));
	printf("isdigit\n %d, %d\n", ft_isdigit(c), isdigit(c));
	printf("isprint\n %d, %d\n", ft_isprint(c), isprint(c));
	
	//ft_to* & atoi
	char	a = 'A';
	char	b = 'b';
	const char cool[50] = "-53";
	const char	hot[50] = "  -128987";

	printf("toupper\n %d, %d, %d, %d\n", ft_toupper(a), toupper(a), ft_toupper(b), toupper(b));
	printf("tolower\n %d, %d, %d, %d\n", ft_tolower(a), tolower(a), ft_tolower(b), tolower(b));
	printf("atoi\n %d, %d, %d, %d\n", ft_atoi(cool), ft_atoi(hot), atoi(cool), atoi(hot));

	//ft_str*
	const char str[50] = "hello";
	const char	str2[50] = "ll";
	const char	str3[50] = "christmas eve";
	//char	sweet[50] = "abcdef";
	char	blank[50];
	char	blank2[50];
	const char	sunday[20] = "sunny";
	int	ch = 'm';
	
	printf ("strlen\n %zu, %zu\n", ft_strlen(str), strlen(str));
	//printf ("strlcat\n %zu, %zu\n", ft_strlcat((void *)0, sunday, 0), strlcat((void *)0, sunday, 0));
	printf ("strlcpy\n %zu, %s, %zu, %s\n", ft_strlcpy(blank, sunday, 0), blank, strlcpy(blank2, sunday, 0), blank2);
	printf("strncmp\n %d, %d\n", ft_strncmp(str, str2,5), strncmp(str, str2, 5));
	printf("strnstr\n %s, %s\n", ft_strnstr(str3, str3, 5), strnstr(str3, str3, 5));
	printf("strchr\n %s, %s\n", ft_strchr("abbbbbbb", ch), strchr("abbbbbbb", ch));
	printf("strrchr\n %s, %s\n", ft_strrchr("abbbbbbb", ch), strrchr("abbbbbbb", ch));
	
	//ft_mem*
	char src[25] = "this is the orgiginal";
	char dst[25];
	char	movie[] = "We need happy ending";
	//const char	movie2[] = "happy ending";
	char	movie3[] = "We need happy ending";
	//const char	movie4[] = "happy ending";

	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	printf ("memcpy\n %p, %p\n", ft_memcpy(dst, src, 9), memcpy(dst, src, 9));
	printf ("memchr\n %p, %p\n", ft_memchr(src, 'i', 3), memchr(src, 'i', 3));
	printf ("memcmp\n %d, %d\n", ft_memcmp(s1, s2, 4), memcmp(s1, s2,4)) ;
	printf ("memmove\n %p, %s, %p, %s\n", ft_memmove(movie + 8, movie + 6, 6), movie, memmove(movie3 + 8, movie3 + 6, 6), movie3);

	int	*p1;
	int	*p2;
	int	check;

	p1 = (int *)ft_calloc(50, sizeof(int));
	p2 = (int *)calloc(50, sizeof(int));
	if (p1 == NULL)
		printf("NULL");
	else
	{
		check = ft_memcmp(p1, p2, 50);
		printf ("calloc\n this needs to be 0: %d\n", check);
	}
	free (p1);
	free (p2);

	const char	craving[] = "I want a cake";
	char	*cake1 = ft_strdup(craving);
	char	*cake2 = strdup(craving);
	if (cake1 == NULL)
		printf("NULL\n");
	printf("strdup\n %s, %s\n", cake1, cake2);
	free (cake1);
	free (cake2);

	const char	*birthday = "happy birthday";
	char	*special = ft_substr(birthday, 0, 5);

	if (special == NULL)
		printf("NULL\n");
	printf("substr\n %s, %s\n", special, birthday);
	free (special);

	const char	*surprise = "Big surprise";
	const char	*party = " party";
	char	*woo = ft_strjoin(surprise, party);

	if (woo == NULL)
		printf("NULL\n");
	printf("strjoin\n %s\n", woo);
	free (woo);

	const char	*trimming = "\t  \n \n";
	const char	*cut = "\t \n";
	char	*trimmed = ft_strtrim(trimming, cut);

	if (trimmed == NULL)
		printf("NULL\n");
	printf("strtrim\n %s\n", trimmed);
	free (trimmed);

	int	n = -2358;
	char	*charnum = ft_itoa(n);
	
	if (charnum == NULL)
		printf("NULL\n");
	printf("itoa\n %s\n", charnum);
	free (charnum);

	const char	*spliting = "hello!there";
	char	**splited = ft_split(spliting, ' ');
	int	index = 0;
	if (splited == NULL)
		printf("NULL\n");
	while (splited[index] != '\0')
	{
		printf("split\n %s\n", splited[index]);
		free(splited[index]);
		++index;
	}
	free(splited);

	int	fd;
	fd = open("test", O_WRONLY);
	ft_putnbr_fd(-2147483648, fd);
	close (fd);


	t_list	*new;
	t_list	*new2;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	int *content1 = malloc(sizeof(int));
	int *content2 = malloc(sizeof(int));
	int *content3 = malloc(sizeof(int));
	int *newcontent = malloc(sizeof(int));
	int *newcontent2 = malloc(sizeof(int));
	
	*content1 = 10;
	*content2 = 20;
	*content3 = 30;
	*newcontent = 1;
	*newcontent2 = 2;

	node1 = ft_lstnew((void *)content1);
	node2 = ft_lstnew((void *)content2);
	node3 = ft_lstnew((void *)content3);
	new = ft_lstnew((void *)newcontent);
	new2 = ft_lstnew((void *)newcontent2);

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;
	ft_lstadd_front(&node1,new);

	printf("%s\n", "linked list");
	printf("%d\n", ft_lstsize(node1));
	while (node1 != NULL)
	{
		int *link = (int *)(node1->content);
		printf("%d\n", *link);
		node1 = node1 -> next;
	}
	node1 = new;
	ft_lstadd_back(&node1, new2);
	while (node1 != NULL)
	{
		int *link = (int *)(node1->content);
		printf("%d\n", *link);
		node1 = node1->next;
	}
	free (content1);
	free (content2);
	free (content3);
	free (newcontent);
	free (newcontent2);
}
