/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:56:08 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/13 20:09:03 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = NULL;
	if (!s || (!(sub = (char *)malloc(len + 1))))
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
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
