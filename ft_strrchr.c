/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:57:15 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/18 22:38:31 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *) s + i);
		}
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (0);
}
