/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:39:49 by jchan             #+#    #+#             */
/*   Updated: 2018/07/30 20:57:09 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char c)
{
   write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int xxx;
  while (str[xxx] != '\0')
  {
  	ft_putchar(str[xxx]);
  	xxx++;
  }
  
int	main(void)
{
  char str1[25] = "42 is a coding hell!";
  ft_putchar('\n');
  ft_putstr(str1);
  return 0;
}
