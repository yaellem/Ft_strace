/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strncmp.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/13 05:58:11 by ymarcill #+# #+# */
/*Updated: 2017/11/13 06:17:49 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (p1[i] == p2[i] && p1[i] && p2[i] && (i + 1) < n)
		i++;
	return (p1[i] - p2[i]);
}
