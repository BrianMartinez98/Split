#include <stdarg.h>
#include "libft.h"
#include <stdio.h>

int lengtss(char *s1)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == '%')
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			comp++;
		}
		s1++;
	}
	return (comp);
}

char	*pholder(char *format)
{
	char *string;
	int n;
	int i;

	n = lenghtss(format);
	string = (char *)malloc(sizeof(char) * n);
	n = 0;
	i = 0;
	while(format[n] != '\0')
	{
		if(format[n] == '%')
			string[i++] = format[n + 1];
		n++;
	}
	string[i++] = '\0';
	return (string);
}

void printer(char i, void *arg)
{
	if(i == 'c')
		ft_putchar_fd((char)arg, 1);
	else if(i == 's')
		ft_putendl_fd((char *)arg, 1);
	else if(i == 'p')
		ft_putendl_fd((char *)arg, 1);
	else if(i == 'd' || i == 'i' || i == 'u')
		ft_putnbr_fd((int)arg, 1);
	/*
	else if(i == '%')
		ft_putendl_fd((char *)arg, 1);
	else if(i == 'x')
		ft_putendl_fd((char *)arg, 1);
	else if(i == 'X')
		ft_putendl_fd((char *)arg, 1);
	*/
}

int	ft_printf(const char *format, ...)
{
	int x;
	int i;
	va_list arg;

	char *newformat = pholder((char *)format);
	va_start(arg, newformat);
	i = 0;
	while(newformat[i] != '\0')
	{
		x = va_arg(arg, newformat);
		printer(x, (char)newformat[i]);
		i++;
	}
	va_end(arg);
	return (i);
}


int main()
{
	ft_printf("%i%s", ft_atoi("42"), ft_itoa(42));
	/*char *o = "%i, %i, %i, %i %i, %i, %i, %i, %i, %i";
	char **x = ft_split(o, '%');
	char **y = ft_split(x, ',');
	char **z = ft_split(y, ' ');
	for(int i = 0; y[i] != '\0'; i++)
		printf("%s", y[i]);*/
	return (0);
}