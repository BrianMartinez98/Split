/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:42:52 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/06 17:40:57 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	unsigned char			*ptr1;
	unsigned char			*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2 && i < n - 1)
	{
		ptr1++;
		ptr2++;
		i++;
	}
	return ((int)(*ptr1 - *ptr2));
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
	printf("%d\n", memcmp("t\200", "t\0", 2));

    return 0;
}
*/