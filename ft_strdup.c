/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:53:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:52:49 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;
	char	*str;

	str = (char *)s;
	i = 0;
	d = (char *)malloc(ft_strlen(str) + 1);
	if (d == NULL)
		return (NULL);
	if (!d)
		return (NULL);
	while (str[i] != '\0')
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
