/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:44:59 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:49:44 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = c;
		i++;
		n--;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int main() {
    char str1[20];
    char str2[20];
    char c = 'a';
    int n = 1;
    ft_memset(str1, c, n);
    memset(str2, c, n);
    for (int i = 0; i < n; i++) {
        printf("%d", (char )str1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d", (char )str2[i]);
    }
    printf("\n");
    return 0;
}
*/
