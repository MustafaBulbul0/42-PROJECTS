/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:08:11 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/11 23:29:02 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int newCh, size_t sizeStr)
{
	unsigned char*	ptr;
	unsigned char	ch;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)str;
	ch = (unsigned char)newCh;
	while (i < sizeStr)
	{
		ptr[i] = ch;
		i++;
	}
	return (ptr);
}
