/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strsub.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/18 03:42:48 by ymarcill #+# #+# */
/*Updated: 2017/11/29 07:22:50 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strsub(char const *s, unsigned int art, size_t len)
{
	char			*r;
	unsigned int	i;

	i = 0;
	if (!(s))
		return (0);
	if (!(r = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len && s[art])
	{
		r[i] = s[art];
		i++;
		art++;
	}
	r[len] = '\0';
	return (r);
}
