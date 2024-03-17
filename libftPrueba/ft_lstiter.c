/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:16:05 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:44:35 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void iteration(void *r)
{
	int valor = 5;
	*(int *)r = valor; // Corregimos la asignación de valor
}

void printlst(t_list *head)
{
	t_list *temp = head;

	while (temp != NULL)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	// Creamos los nodos
	t_list* nodo1 = (t_list*)malloc(sizeof(t_list));
	t_list* nodo2 = (t_list*)malloc(sizeof(t_list));
	t_list* nodo3 = (t_list*)malloc(sizeof(t_list));

	int valor1 = 1, valor2 = 2, valor3 = 3;

	// Asignamos valores a los nodos
	nodo1->content = &valor1;
	nodo2->content = &valor2;
	nodo3->content = &valor3;

	// Establecemos las conexiones entre los nodos
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;

	// Imprimimos los valores de la lista antes de la iteración
	printlst(nodo1);

	// Iteramos sobre la lista y modificamos sus valores
	ft_lstiter(nodo1, &iteration);

	// Imprimimos los valores de la lista después de la iteración
	printlst(nodo1);

	// Liberamos la memoria asignada para los nodos
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return 0;
}
*/
