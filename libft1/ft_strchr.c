/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:45:40 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/02 14:36:10 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	while (((char*)s)[i] != '\0' && flag == 0)
	{
		if (((char*)s)[i] ==  c)
		{
			return ((char *)&s[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&s[i]);
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
