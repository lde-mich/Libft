/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:17:46 by lde-mich          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	if (!size && !dest)
		return (0);
	len_dest = ft_strlen(dest);
	len_src = ft_strlen((char *)src);
	j = len_dest ;
	i = 0;
	if (len_dest < size - 1 && size > 0)
	{
		while (src[i] && len_dest + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (len_dest >= size)
		len_dest = size;
	return (len_dest + len_src);
}
