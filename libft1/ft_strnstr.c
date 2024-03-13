/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:48:46 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/06 18:18:09 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	size = ft_strlen(to_find);
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && i <= len)
	{

		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return (&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char *str = "lorem ipsum dolor sit amet";
	char *to_find = "dolor";

	char *result1 = strnstr(str, to_find, 15);
	char *result2 = ft_strnstr(str, to_find, 15);
	printf("1: %s\n", result2);
	printf("2: %s\n", result1);
	return 0;

}
*/
