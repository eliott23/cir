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
	d_i = 0;
	d_l = 0;
	while (dst[d_l])
		d_l++;
	while (src[s_l])
		s_l++;
	return_value = s_l + d_l;
	while (d_i < (dstsize - d_i) && src[s_i])
	{
	/*	ps("\ndstsize ");
		printf("%zu",dstsize);
		ps("this is i ");
		pi(i);
	*/
		dst[d_i] = src[s_i];
		s_i++;
		d_i++;
	}
	return (return_value);
}

int	main()
{
//	char	dst[8] = "Hello";
//	char	src[] = "Zebi";
	char	dst1[8] = "Hello";
	char	src1[] = "Zebi";
	ps("\n this is the returned value ");	
	pi (ft_strlcat(dst1,src1,8));
	ps("\n");
	//pi(strlcat(dst,src,5));
	ps(dst1);
}
