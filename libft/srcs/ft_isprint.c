/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_isprint.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/15 23:16:46 by ymarcill #+# #+# */
/*Updated: 2017/11/15 23:21:18 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
