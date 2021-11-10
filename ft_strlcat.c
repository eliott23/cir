#include <string.h>
#include"libft.h"
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	return_value;
	size_t	s_i;
	size_t	s_l;
	size_t	d_l;

	s_i = 0;
	s_l = 0;
	d_l = 0;
	while (dst[d_l])
		d_l++;
	while (src[s_l])
		s_l++;
	return_value = s_l + d_l;
	if (dstsize)
	{
		while (d_l < (dstsize - 1) && src[s_i])
		{
			dst[d_l] = src[s_i];
			s_i++;
			d_l++;
		}
		dst[d_l] = '\0';
	}
	return (return_value);
}

int	main()
{
	char dst[5] = "Hello";
	char dst1[5] = "Hello";
	char src[] = "zeb";
	char src1[] = "zeb";

	ft_strlcat(dst,src,5);
	strlcat(dst1,src1,5);
	ps(dst);
	ps(dst1);
}
