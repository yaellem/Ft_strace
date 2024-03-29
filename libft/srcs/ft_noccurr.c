/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_noccurr.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/27 04:03:54 by ymarcill #+# #+# */
/*Updated: 2017/11/27 04:17:51 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_noccurr(const char *s, char c)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (*s == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			y++;
		i++;
	}
	return (y);
}
