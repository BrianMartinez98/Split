/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:53:13 by brimarti          #+#    #+#             */
/*   Updated: 2024/03/13 18:23:20 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char my_func(unsigned int i, char str)
 {
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
 }
int main()
 {
	char str[10] = "hello.";
	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
 }
*/
