/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:44:26 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/28 17:34:07 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char *ptr1 = src;
    unsigned char *ptr2 = dest;

    if (dest <= src)
        return (ft_memcpy(dest, src, n));
    if (!n || src == dest)
        return (dest);
    
    size_t i = 0;
    while (i < n)
    {
        ptr2[i] = ptr1[i];
        i++;
    }
    return (dest);
}

/*
#include <stdio.h>

int main() {
    //char str[] = "consectetur";
    char dest[100];

	if (dest != ft_memmove(dest, "lorem ipum dolor sit a", 31))
        write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
    // Move part of the string within the same array
    //ft_memmove(dest, str, 5);

    // Printing the result
    //printf("Original string: %s\n", str);
    //printf("Buffer after memmove: %s\n", dest);

    return 0;
}
*/