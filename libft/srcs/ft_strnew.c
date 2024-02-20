/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strnew.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/18 02:05:36 by ymarcill #+# #+# */
/*Updated: 2017/11/18 02:14:16 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;

	if (!(r = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	ft_bzero(r, size + 1);
	return (r);
}
