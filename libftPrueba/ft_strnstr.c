/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:48:46 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 21:09:49 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (!*to_find || (NULL == str && !len))
		return ((char *)str);
	while (*(str + j) && j < len)
	{
		k = 0;
		while (*(str + j + k) == *(to_find + k) && (k + j) < len)
		{
			if (0 == *(to_find + k + 1))
				return ((char *)str + j);
			++k;
		}
		++j;
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
