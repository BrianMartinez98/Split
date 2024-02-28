/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:53:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:54:00 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		i;
	int		n;
	char	*d;

	d = (char *)malloc(sizeof(char));
	i = 0;
	n = ft_strlen((char *)s);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    const char *original = "Hola, mundo";
    char *duplicada = strdup(original);
    if (duplicada != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicada);
        free(duplicada);
    } else {
        printf("Fallo en la duplicación de la cadena\n");
    }
    return 0;
}
*/
