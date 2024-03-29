/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:42:02 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 21:07:32 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		if (ptr[i] == ch)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	const char *str = "bonjourno";
	char search_char = 'n';

	// Using memchr to find the first occurrence of 'o' in str
	const char *result = (const char *)ft_memchr(str, search_char, 2);

	if (result != NULL) {
		printf("Found '%c' at position: %ld\n", search_char, result - str);
	} else {
		printf("'%c' not found in the string.\n", search_char);
	}

	return 0;
}
*/
