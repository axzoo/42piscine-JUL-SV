/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 17:35:55 by jchan             #+#    #+#             */
/*   Updated: 2018/08/02 17:36:08 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		ft_putchar('\n');
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i] != NULL)
	{
		my_putstr(argv[i]);
		ft_char('\n');
		i++;
	}
	return (0);
}
