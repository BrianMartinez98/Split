/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:43:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/28 12:31:51 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr2;
	char			*ptr1;

	i = 0;
	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (ptr1);
}

/*
#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Using memcpy to copy the content of source to destination
    ft_memcpy(destination, source, 5);

    // Printing the result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
*/
