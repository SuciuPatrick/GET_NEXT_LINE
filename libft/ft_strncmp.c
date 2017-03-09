/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuciu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:55:57 by psuciu            #+#    #+#             */
/*   Updated: 2017/01/07 20:31:40 by psuciu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (*s1 != '\0' && *s1 == *s2 && n > 1)
		{
			s1++;
			s2++;
			n--;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
