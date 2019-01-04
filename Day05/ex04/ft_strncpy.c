/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 17:14:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/30 21:28:11 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	len = 0;
	while (*(src + Len) != '\0' || len < n)
	{
		if (*(src + len) != '\0' && len < n)
		{
			*(dest + len) = *(src + len);
		}
		else
		{
			*(dest + len) = '\0';
		}
		len++;
	}
	return (dest);
}
