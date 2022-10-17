/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:55:34 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/16 17:49:32 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		s;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	s = 0;
	i = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joined = malloc((len + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	while (((char *)s1)[i] != '\0')
		joined[s++] = ((char *)s1)[i++];
	i = 0;
	while (((char *)s2)[i] != '\0')
		joined[s++] = ((char *)s2)[i++];
	joined[s] = '\0';
	return (joined);
}
