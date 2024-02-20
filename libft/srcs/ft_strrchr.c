/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strrchr.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/17 06:47:34 by ymarcill #+# #+# */
/*Updated: 2017/11/17 07:41:08 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	char	x;
	int		i;

	r = (char *)s;
	x = (char)c;
	i = 0;
	while (r[i])
		i++;
	while (i >= 0)
	{
		if (r[i] == x)
			return (r + i);
		if (*s == 0)
			return ((char *)0);
		i--;
	}
	return ((char *)0);
}
