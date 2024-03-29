/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_putendl_fd.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/21 05:02:57 by ymarcill #+# #+# */
/*Updated: 2017/11/21 05:19:36 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	p;

	p = '\n';
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, &p, 1);
	}
}
