/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strjoin.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/20 23:29:18 by ymarcill #+# #+# */
/*Updated: 2017/11/24 01:33:37 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		x;
	char	*tmp;

	if (!(s1) || !(s2))
		return (NULL);
	x = ft_strlen(s2) + ft_strlen(s1);
	if (!(r = ft_strnew(x)))
		return (NULL);
	tmp = r;
	tmp = ft_memcpy(tmp, s1, ft_strlen(s1));
	r = ft_strcat(tmp, s2);
	return (r);
}
