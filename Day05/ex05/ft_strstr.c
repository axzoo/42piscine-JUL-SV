/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:18:25 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 13:26:42 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str)
	{
		*begin = str;
		*pattern = to_find;
		while (*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
		{
			return (begin);
		}
		str = begin + 1;
	}
	return (NULL);
}
