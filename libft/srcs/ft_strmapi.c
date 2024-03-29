/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strmapi.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/18 02:49:13 by ymarcill #+# #+# */
/*Updated: 2017/11/18 03:36:47 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	i = 0;
	if (!(s))
		return (0);
	if (!(r = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}
