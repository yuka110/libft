/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 16:49:21 by yitoh         #+#    #+#                 */
/*   Updated: 2022/11/07 16:50:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (struct s_list *)malloc (sizeof(t_list));
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}
