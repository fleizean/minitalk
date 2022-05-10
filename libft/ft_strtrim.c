/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:36:17 by eyagiz            #+#    #+#             */
/*   Updated: 2022/05/10 13:36:18 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(const char *a, char b)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == b)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		i;
	int		son;
	int		baslangic;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	son = ft_strlen(s1);
	baslangic = 0;
	while (s1[baslangic] != '\0' && checker(s2, s1[baslangic]))
		baslangic++;
	while (baslangic < son && checker(s2, s1[son - 1]))
		son--;
	str = (char *)malloc(sizeof(char) * (son - baslangic + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (baslangic < son)
	{
		str[i] = s1[baslangic];
		i++;
		baslangic++;
	}
	str[i] = '\0';
	return (str);
}
