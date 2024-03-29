/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_sqrt.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/24 05:12:58 by ymarcill #+# #+# */
/*Updated: 2017/11/27 03:34:01 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_sqrt(int i)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (i == 0)
		return (0);
	while (y < i)
	{
		x++;
		y = x * x;
	}
	if (y == i)
		return (1);
	else
		return (0);
}
