/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:11:21 by eyagiz            #+#    #+#             */
/*   Updated: 2022/05/10 13:11:22 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	size_t			total;
	unsigned int	i;

	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (0);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
