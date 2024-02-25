/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:55:32 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:50:05 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	new = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i + 1] = '\0';
	return (new);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *s1 = "hello";
	char *s2 = ", world!";
	printf("el string final es: %s \n", ft_strjoin(s1, s2));
	return 0;
}
*/
