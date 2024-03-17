/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:53:59 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:59:09 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (NULL == s1 || NULL == set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		++start;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		--end;
	if (start > end)
		return (ft_strdup(""));
	trimmed = malloc((end - start) + 2);
	if (NULL == trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, (end - start) + 2);
	return (trimmed);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = "HelloHell";
	char *to_find = "Hell";

	//char *result1 = strstr(str, to_find);
	//char *result2 = ft_strtrim(str, to_find);
	//printf("1: %s\n", result1);
	printf("2: %s\n", ft_strtrim(str, to_find));
	return 0;
}
*/
