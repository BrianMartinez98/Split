/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:44:26 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 21:07:49 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned const char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		p_str1[n] = p_str2[n];
	return (str1);
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
