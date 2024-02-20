/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strmap.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/18 02:31:20 by ymarcill #+# #+# */
/*Updated: 2017/11/18 03:36:14 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*r;

	i = 0;
	if (!(s))
		return (0);
	if (!(r = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[i])
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}
