/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:41:27 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/13 18:05:54 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127 )
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int main() {
    char c = '3';
    printf("%d\n", isprint(c));
    printf("%d\n", ft_isprint(c));
    return 0;
}
*/
