/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:14:26 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/17 20:30:13 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void del(void* s)
{
	free(s);
}

int main(void)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return 1; // Indicate failure
	}

	node->content = strdup("Some data");  // Assuming you have strdup function
	node->next = NULL;

	// Call ft_lstdelone to delete the node
	ft_lstdelone(node, del);

	return 0;
}
*/
