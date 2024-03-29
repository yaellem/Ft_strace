/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_striteri.c  :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/18 02:22:45 by ymarcill #+# #+# */
/*Updated: 2017/11/23 23:26:20 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
