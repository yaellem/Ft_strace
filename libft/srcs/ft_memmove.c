/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_memmove.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/17 02:55:28 by ymarcill #+# #+# */
/*Updated: 2017/11/17 04:49:51 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memmove(void *d, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*x;
	unsigned const char *y;

	i = 0;
	x = (unsigned char *)d;
	y = (unsigned const char *)src;
	if (d > src)
	{
		while (len-- > 0)
			x[len] = y[len];
	}
	else if (src > d)
	{
		while (i < len)
		{
			x[i] = y[i];
			i++;
		}
	}
	return (d);
}
