/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_lstdelone.c :+::+: :+:*/
/* +:+ +:++:+  */
/*By: ymarcill <marvin@42.fr>  +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2017/11/23 01:12:54 by ymarcill #+# #+# */
/*Updated: 2017/11/23 02:22:54 by ymarcill###########.fr */
/* */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstdelone(t_list **al, void (*del)(void *, size_t))
{
	del((*al)->content, (*al)->content_size);
	free(*al);
	*al = NULL;
}
