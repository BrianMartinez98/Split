/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:49:15 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:57:56 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == *(s + len))
			return ((char *)(s + len));
		--len;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char characterToFind = 'o';
    printf("%s\n", ft_strrchr(str, characterToFind));
    char *result = ft_strrchr(str, characterToFind);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", 
		characterToFind, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", characterToFind);
    }
    return 0;
}
*/
