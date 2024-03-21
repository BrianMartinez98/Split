/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:59:54 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 21:05:35 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t num_elementos = 5;
    size_t tamaño_elemento = sizeof(int);
    int *array = (int *)ft_calloc(num_elementos, tamaño_elemento);
    if (array != NULL) {
        printf("Asignación de memoria exitosa\n");
        free(array);
    } else {
        printf("Fallo en la asignación de memoria\n");
    }
    return 0;
}

*/
