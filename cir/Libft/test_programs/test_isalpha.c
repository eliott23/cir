#include <stdio.h>
#include "libft.h"
void	test_isalpha()
{
	int	i = 0;
	printf ("those are non alpha characters ---> \n");
	while (i < 65)
	{	
		printf("%d\n", ft_isalpha(i));
		i++;
	}
	i = 91;
	while (i < 97)
	{	
		printf("%d\n", ft_isalpha(i));
		i++;
	}
	i = 123;
	while (i <= 127)
	{	
		printf("%d\n", ft_isalpha(i));
		i++;
	}
	printf("those are the ALPHA characters \n");
	i = 65;
	while (i <= 90)
	{
		printf("%d\n", ft_isalpha(i));
		i++;
	}
	i = 97;
	while (i <= 122)
	{
		printf("%d\n", ft_isalpha(i));
		i++;
	}
}
