/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_isascii.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/15 23:11:39 by ymarcill #+# #+# */
/*Updated: 2017/11/15 23:14:20 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}
