/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:52:40 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/17 21:08:07 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	biggest(int a, int fd)
{
	if (a)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		write(fd, "2147483647", 10);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 2147483647)
	{
		biggest(0, fd);
	}
	else if (n == -2147483648)
	{
		biggest(1, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
