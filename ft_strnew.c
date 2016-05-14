/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeline <sbeline@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 15:47:55 by sbeline           #+#    #+#             */
/*   Updated: 2016/05/14 18:47:25 by sbeline          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size, const char *s)
{
	char	*tmp;
	void	*begin;

	if ((tmp = (char*)malloc(sizeof(char) * (size + 1))))
	{
		begin = tmp;
		while (*s && size--)
			*tmp++ = *s++;
		*tmp = '\0';
		return (begin);
	}
	return (NULL);
}
