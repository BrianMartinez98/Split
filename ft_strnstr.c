/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:48:46 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 14:49:27 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	i;
	int				size;

	size = ft_strlen(to_find);
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && i <= len)
	{
		if (str[i] == to_find[0])
		{
			if (!ft_strncmp(&str[i], to_find, size))
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char *str = "Hello, World!";
	char *to_find = "o";

	char *result1 = strstr(str, to_find);
	char *result2 = ft_strnstr(str, to_find, 7);
	printf("1: %s\n", result1);
	printf("2: %s\n", result2);
	return 0;

}
*/
