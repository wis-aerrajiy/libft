/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:22:29 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/17 15:22:26 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len >= s_len)
		len = (s_len - start);
	if (start >= s_len)
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (sub != NULL)
	{
		i = 0;
		while (len-- && s[start])
			sub[i++] = s[start++];
		sub[i] = '\0';
	}
	return (sub);
}
