/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:14 by lde-mich          #+#    #+#             */
/*   Updated: 2023/02/01 16:57:29 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	if ((dest == src) || n == 0)
		return (dest);
	if (!src && !dest)
		return (0);
	i = 0;
	src1 = (unsigned char *) src;
	dest1 = (unsigned char *) dest;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
