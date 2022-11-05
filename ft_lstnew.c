/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 14:11:54 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/05 15:59:39 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*newnode;

	newnode = (struct s_list *)malloc (sizeof(struct s_list));
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}
