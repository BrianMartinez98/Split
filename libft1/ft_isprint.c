/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:41:27 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/21 17:53:03 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 && c >= 0)
		return (0);
	else if (c == 177 || c == 127)
		return (0);
	else
		return (1);
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
