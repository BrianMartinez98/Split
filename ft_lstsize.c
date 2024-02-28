/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:18:03 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:55:23 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
	// Crear una lista de prueba
	t_list *lista = NULL;

	// Agregar algunos elementos a la 
	lista (esto es solo un ejemplo, puedes adaptarlo 
	según tus necesidades)
	for (int i = 0; i < 5; i++)
	{
		t_list *nuevo_nodo = (t_list*)malloc(sizeof(t_list));
		nuevo_nodo->content = NULL;  // Puedes asignar 
		algún contenido si es necesario
		nuevo_nodo->next = lista;
		lista = nuevo_nodo;
	}

	// Llamar a la función ft_lstsize y mostrar el resultado
	printf("Tamaño de la lista: %d\n", ft_lstsize(lista));

	return 0;
}
*/
