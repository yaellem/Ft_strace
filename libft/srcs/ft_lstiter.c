/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_lstiter.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/23 03:17:22 by ymarcill #+# #+# */
/*Updated: 2017/11/23 03:24:27 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstiter(t_list *l, void (*f)(t_list *elem))
{
	if (l)
	{
		while (l)
		{
			f(l);
			l = l->next;
		}
	}
}
