/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:50:00 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/17 19:16:52 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(char str)
{
	if (str == '\0')
	{
		return (1);
	}
	if (str < 'a' || str > 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && ft_islower(c))
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercaseChar = 'a';
    printf("Original character: %c\n", lowercaseChar);
    printf("Uppercase character: %c\n", ft_toupper(lowercaseChar));
    return 0;
}
*/
