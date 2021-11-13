#include "libft.h"
#include <stdlib.h>

int	main()
{
	char hh[] = "hhh";
	char *arr = hh + 4;
//	int	i = 0;

	memset(arr,65,8);
	printf("%s",arr);
}
