/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strncpy.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/12 04:09:01 by ymarcill #+# #+# */
/*Updated: 2017/11/13 05:53:38 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strncpy(char *d, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i])
	{
		d[i] = src[i];
		i++;
	}
	while (i < len)
		d[i++] = '\0';
	return (d);
}
