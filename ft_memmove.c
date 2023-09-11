/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:01:51 by lde-mich          #+#    #+#             */
/*   Updated: 2023/01/24 16:58:00 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	src1 = (unsigned char *) src;
	dest1 = (unsigned char *) dest;
	if (src == dest)
		return ((void *)dest);
	if (dest > src)
	{
		while (n-- > 0)
			dest1[n] = src1[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return ((void *)dest);
}
/*
int	main(void)
{
	char	s[] = "ciao come stai";
	char	*d;

	d = s + 1;
	printf("%s\n", ft_memmove(d, s, 8));
}
*/