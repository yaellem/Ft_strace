/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_bzero.c  :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/14 20:42:51 by ymarcill #+# #+# */
/*Updated: 2017/11/14 20:51:01 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
