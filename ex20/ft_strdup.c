#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int	i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int	main(int ac, char **av)
{
	printf("ft_strdup ---> %s\n", ft_strdup("tototo"));
	printf("strdup ---> %s\n", strdup("tototo"));
	return (0);
}
