/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_memcmp.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/17 05:33:24 by ymarcill #+# #+# */
/*Updated: 2017/11/17 07:47:45 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*r1;
	unsigned char	*r2;

	i = 0;
	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i + 1 < n && r1[i] == r2[i])
		i++;
	return (r1[i] - r2[i]);
}
