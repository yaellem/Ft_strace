/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_lstmap.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/23 03:24:54 by ymarcill #+# #+# */
/*Updated: 2017/11/26 01:46:43 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *l, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	if (l == NULL || f == NULL)
		return (0);
	if (!(new = f(l)))
		return (NULL);
	tmp = new;
	l = l->next;
	while (l)
	{
		if (!(tmp->next = f(l)))
			return (NULL);
		tmp = tmp->next;
		l = l->next;
	}
	return (new);
}
