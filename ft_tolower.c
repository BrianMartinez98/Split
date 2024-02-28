/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:49:38 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/17 19:16:45 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(char str)
{
	if (str == '\0')
	{
		return (1);
	}
	if (str < 'A' || str > 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && ft_isupper(c))
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercaseChar = 'A';
    printf("Original character: %c\n", lowercaseChar);
    printf("Uppercase character: %c\n", ft_tolower(lowercaseChar));
    return 0;
}
*/
