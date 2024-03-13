/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:13 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/02 14:21:50 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srcSize;
	size_t	destSize;
	size_t	keep;

	srcSize = ft_strlen(src);
	destSize = ft_strlen(dest);
	if (size <= destSize)
		return (srcSize + size);
	keep = destSize;
	while (*src != '\0' && keep < (size - 1))
		*(dest + keep++) = *src++;
	*(dest + keep) = '\0';
	return (srcSize + destSize);
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