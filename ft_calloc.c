/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:30:57 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/18 22:35:10 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloced;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	calloced = malloc(count * size);
	if (calloced != NULL)
		ft_bzero(calloced, count * size);
	return (calloced);
}
