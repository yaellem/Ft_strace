/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_putendl.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/21 02:48:30 by ymarcill #+# #+# */
/*Updated: 2017/11/21 02:50:52 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putendl(char const *s)
{
	ft_pustr(s);
	ft_putchar('\n');
}
