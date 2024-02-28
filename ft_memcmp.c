/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:42:52 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:57:38 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*ptr1;
	char			*ptr2;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2 && i < n - 1)
	{
		ptr1++;
		ptr2++;
		i++;
	}
	return (*ptr1 - *ptr2);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "World";

    int result1 = ft_memcmp(str1, str2, 5);
    int result2 = ft_memcmp(str1, str3, 5);

    if (result1 == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    if (result2 == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    return 0;
}
*/
