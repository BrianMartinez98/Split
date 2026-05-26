#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s;
	char	**split;

	printf("ft_strlen(hello): %zu\n", ft_strlen("hello"));
	printf("ft_atoi(-42): %d\n", ft_atoi("-42"));
	s = ft_strjoin("Lib", "ft");
	if (s)
	{
		printf("ft_strjoin: %s\n", s);
		free(s);
	}
	split = ft_split("one,two,three", ',');
	if (split)
	{
		for (int i = 0; split[i]; i++)
		{
			printf("split[%d]: %s\n", i, split[i]);
			free(split[i]);
		}
		free(split);
	}
	return (0);
}
