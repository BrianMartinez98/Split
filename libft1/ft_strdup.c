/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:53:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/13 19:58:02 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;
	char	*str;

	str = (char *)s;
	i = 0;
	d = (char *)malloc(ft_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	if (!d)
		return (NULL);
	while (str[i] != '\0')
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
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
