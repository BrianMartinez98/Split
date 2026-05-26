/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:43:21 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 19:47:15 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr2;
	char			*ptr1;

	i = 0;
	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	if (!ptr1 && !ptr2)
		return (NULL);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (ptr1);
}
