/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:45:40 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/17 19:15:37 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "o, World!";
    char characterToFind = 'o';
    printf("%s\n", strchr(str, characterToFind));
    char *result = ft_strchr(str, characterToFind);
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n",
	   	characterToFind, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", characterToFind);
    }
    return 0;
}
*/
