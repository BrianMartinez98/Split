/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:53:59 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/13 20:20:52 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return ("\0");
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return ("\0");
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return ("\0");
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
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
