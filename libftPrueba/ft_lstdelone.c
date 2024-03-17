/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:15:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:43:20 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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
