/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strlcat.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/14 21:13:42 by ymarcill #+# #+# */
/*Updated: 2017/11/15 19:28:13 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *d, const char *src, size_t size)
{
	size_t i;
	size_t y;
	size_t x;

	x = ft_strlen(src);
	y = ft_strlen(d);
	i = 0;
	if (size <= y)
		return (x + size);
	while (d[i])
		i++;
	while (i < size - 1 && *src)
	{
		d[i] = *src;
		i++;
		src++;
	}
	d[i] = '\0';
	return (ft_strlen(d) + ft_strlen(src));
}
