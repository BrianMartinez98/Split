/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:42:02 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:55:13 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = (char *)s;
	while (*ptr != '\0' && i <= num)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hell, World!";
    char search_char = 'o';

    // Using memchr to find the first occurrence of 'o' in str
    const char *result = (const char *)ft_memchr(str, search_char, 3);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }

    return 0;
}
*/
