#include <string.h>
#include"libft.h"
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	return_value;
	size_t	d_i;
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
	d_i = d_l;
	ps("this is the very last index and also the length of dest ");
	printf("%zu\n",d_i);
	if (dstsize)
	{
		while (d_i < (dstsize - 1) && src[s_i])
		{
			ps("it went here ");
			dst[d_i] = src[s_i];
			s_i++;
			d_i++;
		}
		dst[d_i] = '\0';
	}
	return (return_value);
}
