/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 12:30:49 by jchan             #+#    #+#             */
/*   Updated: 2018/07/30 20:57:09 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void ft_strlen();

int main()
{ 
    ft_strlen();
    return 0;
}

void ft_strlen()
{
    char c[25] = "42 is a coding hell No.2";
    printf("%d\n",strlen(c));
}
