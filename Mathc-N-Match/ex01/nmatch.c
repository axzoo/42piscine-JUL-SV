/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 20:12:28 by jchan             #+#    #+#             */
/*   Updated: 2018/08/05 20:13:28 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (match(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (match(s1, s2 + 1));
	}
	if (*s1 != '\0' && *s2 == '*')
	{
		return (match(s1 + 1, s2) + match(s1, s2 + 1));
	}
	return (0);
}
