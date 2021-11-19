#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
}

int	main()
{
	int	fd;

	fd = open("hh.txt", O_WRONLY | O_CREAT);
	ft_putstr_fd("hhh", fd);
}
