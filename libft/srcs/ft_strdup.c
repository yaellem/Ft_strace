/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strdup.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/15 23:35:36 by ymarcill #+# #+# */
/*Updated: 2017/11/17 02:01:23 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * i + 1);
	if ((malloc(sizeof(char) * i + 1)) == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
