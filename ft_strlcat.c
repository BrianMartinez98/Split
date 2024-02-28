/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:13 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/28 17:49:35 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(src);
	y = ft_strlen(dest);
	while (*dest != '\0')
		++dest;
	while (*src != '\0' && size > 0)
	{
		while (*dest != '\0')
		{
			++dest;
		}
		*dest = *src;
		*(dest + 1) = '\0';
		++src;
		size--;
	}
	return (x + y);
}

/*
#include <string.h>
#include <stdio.h>

int main() {
    char dest[20] = "hello";
    char src[] = "world";
    int result = strlcat(dest, src, 0);

    printf("%d\n", result);
    printf("%zu\n", ft_strlcat(dest, src, 0));

    return 0;
}
*/