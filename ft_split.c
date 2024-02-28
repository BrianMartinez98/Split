/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:37:09 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/28 11:24:56 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	while (s[i] != '\0' )
	{
		if (s[i] == c)
			j++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 2));
	str[j + 1] = (char *) '\0';
	i = 0;
	j = 0;
	while (s[j] != '\0' )
	{
		while (s[j] != '\0' && s[j] != c)
		{
			j++;
		}
		str[i] = (char *)malloc(sizeof(char) * j + 1);
		ft_strlcpy(str[i], s, j + 1);
		s = s + j + 1;
		i++;
		j = 0;
	}
	return (str);
}
/*
int main()
{
char    *S = "he.llo";
char    **result = ft_split(S, '.');
int i = 0;
while (result[i] != '\0')
{
	printf("%s\n", result[i]);
	i++;
}

// Libera la memoria asignada dinámicamente
i = 0;
while (result[i] != '\0')
{
	free(result[i]);
	i++;
}
free(result);

return 0;
}
*/