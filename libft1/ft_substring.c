/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:56:08 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:49:14 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = (char *)malloc(len + 1);
	i = 0;
	while (s[i] != '\0' && len != 0)
	{
		sub[i] = s[start];
		start++;
		i++;
		len--;
	}
	sub[i + 1] = '\0';
	return (sub);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *s = "hello, world!";
	int start = 3;
	int len = 5;
	printf("el substring es: %s \n", ft_substr(s, start, len));
	return 0;
}
*/
