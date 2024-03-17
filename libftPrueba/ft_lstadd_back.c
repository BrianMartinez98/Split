/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:13:57 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:42:02 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (*lst)
		last->next = new;
	else
		*lst = new;
}

/*
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    t_list *list = NULL;
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    if (!node1 || !node2 || !node3)
    {
        // Handle memory allocation failure
        printf("Memory allocation failed\n");
        return 1; // Indicate failure
    }
    node1->content = "Nodo 1";
    node1->next = NULL;
    node2->content = "Nodo 2";
    node2->next = NULL;
    node3->content = "Nodo 3";
    node3->next = NULL;
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    // Print the content of the list
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    // Don't forget to free the allocated memory
    free(node1);
    free(node2);
    free(node3);
    return 0;
}
*/
