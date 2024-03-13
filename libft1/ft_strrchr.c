/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:49:15 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/02 14:39:34 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int flag;

	flag = 0;
	i = ft_strlen((char *)s);
	while (i >= 0 && flag == 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
			flag = 1;
		}
		i--;
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
