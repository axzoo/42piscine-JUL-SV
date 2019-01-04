/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:41:48 by jchan             #+#    #+#             */
/*   Updated: 2018/08/02 15:57:09 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char **ft_split_whitespaces(char *str)
{
	char * perch;

	perch = strtok (str," ,.-");
	while (perch != NULL)
	{
		printf ("%s\n",perch);
		perch = strtok (NULL, " ,.-");
	}
}
