/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:42:34 by brimarti          #+#    #+#             */
/*   Updated: 2024/02/28 12:50:00 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*real_itoa(char *num, int size, int size_r, int n)
{
	if ((long)n < 0)
	{
		num = (char *)malloc(sizeof(char) * (size + 2));
		num[0] = '-';
		n *= (-1);
	}
	else
		num = (char *)malloc(sizeof(char) * (size + 1));
	if (!num)
		return (NULL);
	size_r = size;
	while (size > 0)
	{
		if (n > 9)
			num[size] = ((long)n) % 10 + '0';
		else
			num[size] = ((long)n) + '0';
		n = n / 10;
		size--;
	}
	num[size_r + 1] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		size_r;

	size_r = 0;
	num = 0;
	return (real_itoa(num, ft_putnbr((long)n), size_r, n));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{

	char *new = ft_itoa(-929932);
	int i = 0;
	while (new[i] != '\0')
	{
		printf("%c", new[i]);
		i++;
	}
	printf("\n");
	//char buffer [sizeof(int)*8+1];
	//printf("%d\n", itoa(-929932, buffer, DECIMAL));
    return 0;
}
*/
